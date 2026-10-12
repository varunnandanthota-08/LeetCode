// Last updated: 10/12/2026, 7:12:16 PM
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int cost=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i&1)cost-=nums[i];
            else cost+=nums[i];
        }
        return cost;
    }
};