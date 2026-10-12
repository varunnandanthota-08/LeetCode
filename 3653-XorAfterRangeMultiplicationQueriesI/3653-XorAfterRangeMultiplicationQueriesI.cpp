// Last updated: 10/12/2026, 7:12:49 PM
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long mod=1e9+7;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            int k=queries[i][2];
            int v=queries[i][3];
            while(l<=r&&r<nums.size()){
                nums[l]=((nums[l]%mod)*(v%mod))%mod;
                l+=(k);
            }
        }
        long long prod=0;
        for(int x:nums)prod^=x;
        return prod;
    }
};