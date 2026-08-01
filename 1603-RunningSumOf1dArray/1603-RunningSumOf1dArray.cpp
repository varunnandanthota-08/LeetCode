// Last updated: 8/2/2026, 12:59:23 AM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>prefix(nums.size(),0);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        return prefix;
    }
};