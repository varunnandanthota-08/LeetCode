// Last updated: 8/2/2026, 1:03:54 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int x:nums){
            ans=ans^x;
        }
        return ans;
    }
};