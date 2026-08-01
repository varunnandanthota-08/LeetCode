// Last updated: 8/2/2026, 1:02:59 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0&&(n&(n-1))==0) return true;
        else return false;
    }
};