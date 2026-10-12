// Last updated: 10/12/2026, 7:11:45 PM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums.front(),nums.back());
    }
};