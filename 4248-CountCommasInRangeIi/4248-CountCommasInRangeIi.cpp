// Last updated: 8/2/2026, 12:53:39 AM
class Solution {
public:
    long long countCommas(long long n) {
       long long c=0;
        long long i=1000;
        while(i<=n){
            c+=(n-i+1);
            if(n<1000/i)break;
            i*=1000;
        }
        return c;
    }
};