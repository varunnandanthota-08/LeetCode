// Last updated: 8/2/2026, 1:05:45 AM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int minv=INT_MAX,ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    int sum=nums[i]+nums[j]+nums[k];
                    int diff=abs(sum-target);
                    if(diff<=minv){
                        minv=diff;
                        ans=sum;
                    }
                }
            }
        }
        return ans;
    }
};
//-4 -1 1 2
//s=-4