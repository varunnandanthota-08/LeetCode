// Last updated: 10/12/2026, 7:10:44 PM
class Solution {
public:
    int countCommas(int n) {
        if(n<1000)return 0;
        return n-1000+1;
    }
};
