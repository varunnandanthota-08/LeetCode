// Last updated: 8/2/2026, 12:53:10 AM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>rev=nums;
        reverse(rev.begin(),rev.end());
        nums.insert(nums.end(),rev.begin(),rev.end());
        return nums;
    }
};