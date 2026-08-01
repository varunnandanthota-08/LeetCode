// Last updated: 8/2/2026, 12:58:19 AM
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int x:nums){
            res=res|x;
        }
        return res*(1<<(n-1));
    }
};