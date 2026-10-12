// Last updated: 10/12/2026, 7:09:51 PM
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxv=nums[0],minv=nums[nums.size()-1];
        vector<int>t1(nums.size());
        vector<int>t2(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=maxv){
                maxv=nums[i];
            }
            t1[i]=maxv;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=minv){
                minv=nums[i];
            }
            t2[i]=minv;
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if((t1[i]-t2[i])<=k){
                ans=min(ans,i);
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};