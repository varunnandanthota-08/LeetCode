// Last updated: 10/12/2026, 7:10:41 PM
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