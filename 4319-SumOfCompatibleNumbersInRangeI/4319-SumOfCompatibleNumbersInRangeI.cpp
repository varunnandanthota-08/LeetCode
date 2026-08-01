// Last updated: 8/2/2026, 12:53:03 AM
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