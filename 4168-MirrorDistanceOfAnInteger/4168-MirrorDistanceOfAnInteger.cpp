// Last updated: 8/2/2026, 12:54:21 AM
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