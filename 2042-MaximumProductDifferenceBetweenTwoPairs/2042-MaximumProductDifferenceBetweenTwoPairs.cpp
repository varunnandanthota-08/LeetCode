// Last updated: 8/2/2026, 12:58:11 AM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int a=nums[size-1];
        int b=nums[size-2];
        int c=nums[0];
        int d=nums[1];
        return (a*b)-(c*d);
    }
};
