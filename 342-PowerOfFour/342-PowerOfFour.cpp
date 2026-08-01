// Last updated: 8/2/2026, 1:02:31 AM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n>0&&((n&(n-1))==0)&&((n-1)%3==0))return true;
        return false;
    }
};