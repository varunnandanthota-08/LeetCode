// Last updated: 10/12/2026, 7:09:42 PM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>rev=nums;
        reverse(rev.begin(),rev.end());
        nums.insert(nums.end(),rev.begin(),rev.end());
        return nums;
    }
};