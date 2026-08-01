// Last updated: 8/2/2026, 1:03:20 AM
class Solution {
public:
    int hammingWeight(int n) {
        int c=0;
        while(n){
            n&=(n-1);
            c++;
        }
        return c;
    }
};