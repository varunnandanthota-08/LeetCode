// Last updated: 8/2/2026, 12:54:28 AM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums.front(),nums.back());
    }
};