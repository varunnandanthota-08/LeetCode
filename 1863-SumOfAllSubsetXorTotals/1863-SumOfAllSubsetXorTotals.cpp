// Last updated: 10/12/2026, 7:17:39 PM
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