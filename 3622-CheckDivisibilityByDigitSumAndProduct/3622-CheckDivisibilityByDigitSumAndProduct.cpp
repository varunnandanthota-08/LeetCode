// Last updated: 10/12/2026, 7:13:01 PM
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1;
        int num=n;
        while(num>0){
            sum+=(num%10);
            prod*=(num%10);
            num/=10;
        }
        return n%(sum+prod)==0;
    }
};
