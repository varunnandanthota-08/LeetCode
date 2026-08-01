// Last updated: 8/2/2026, 1:04:49 AM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int currentSum=0;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            currentSum=max(nums[i],currentSum+nums[i]);
            max_sum=max(max_sum,currentSum);
        }
        return max_sum;
    }
};