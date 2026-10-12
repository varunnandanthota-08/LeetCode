// Last updated: 10/12/2026, 7:09:52 PM
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int minv=nums[i],maxv=nums[i];
            for(int j=0;j<=i;j++){
                maxv=max(maxv,nums[j]);
            }
            for(int k=i+1;k<nums.size();k++){
                minv=min(minv,nums[k]);
            }
            if((maxv-minv)<=k){
                ans=min(ans,i);
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};