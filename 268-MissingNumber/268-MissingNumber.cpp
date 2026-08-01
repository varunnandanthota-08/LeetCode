// Last updated: 8/2/2026, 1:02:43 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n=nums.size();
        int sum2=n*(n+1)/2;
        return sum2-sum;
    }
};