// Last updated: 10/12/2026, 7:11:41 PM
class Solution {
public:
    int mirrorDistance(int n) {
        int num=n;
        int rev=0;
        while(num>0){
            int rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        return abs(rev-n);
    }
};