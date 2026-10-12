// Last updated: 10/12/2026, 7:21:31 PM
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        long long res=0;
        int i=0;
        while(n>0){
            long long num=n&1;
            if(num==0){
                res=res|(1<<i);
            }
            n=n>>1;
            i++;
        }
        return res;
    }
};