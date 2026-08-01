// Last updated: 8/2/2026, 1:01:42 AM
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(long long i=0;i<nums.size()-1;i+=2){
            sum+=nums[i];
        }
        return sum;
    }
};