// Last updated: 8/2/2026, 12:55:03 AM
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