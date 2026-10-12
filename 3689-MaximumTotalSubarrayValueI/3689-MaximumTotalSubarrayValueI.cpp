// Last updated: 10/12/2026, 7:12:45 PM
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxv=INT_MIN;
        long long minv=INT_MAX;
        for(long long x:nums){
            maxv=max(maxv,x);
            minv=min(minv,x);
        }
        return k*(maxv-minv);
    }
};