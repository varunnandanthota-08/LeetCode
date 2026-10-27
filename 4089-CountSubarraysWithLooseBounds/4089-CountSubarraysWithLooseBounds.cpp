// Last updated: 10/27/2026, 8:39:42 PM
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        int a=0,b=-1,c=-1;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=maxK&&nums[i]>=minK){
                a++;
                ans+=a;
            }
            else{
                a=0;
            }
        }
        return ans;
    }
};