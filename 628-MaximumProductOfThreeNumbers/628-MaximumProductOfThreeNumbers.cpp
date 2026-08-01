// Last updated: 8/2/2026, 1:01:38 AM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int v1=nums[n-1]*nums[n-2]*nums[n-3];
        int v2=nums[0]*nums[1]*nums[n-1];
        return max(v1,v2);
    }
};