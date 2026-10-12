// Last updated: 10/12/2026, 7:09:37 PM
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans=0;
        for(int i=1;i<=(n+k);i++){
            if((abs(n-i)<=k)&&((n&i)==0)){
                ans+=i;
            }
        }
        return ans;
    }
};