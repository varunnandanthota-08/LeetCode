// Last updated: 8/2/2026, 12:54:46 AM
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