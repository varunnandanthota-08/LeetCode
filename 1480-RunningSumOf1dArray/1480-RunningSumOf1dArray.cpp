// Last updated: 10/12/2026, 7:19:24 PM
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