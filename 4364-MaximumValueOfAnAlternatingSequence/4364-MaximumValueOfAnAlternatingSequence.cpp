// Last updated: 8/2/2026, 12:52:49 AM
class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1)return s;
        long long a1=(s+m)+1LL*(m-1)*((n/2)-1);
        long long a2=(s)+1LL*(m-1)*((n/2)-1);
        return max(a1,a2);
    }
};