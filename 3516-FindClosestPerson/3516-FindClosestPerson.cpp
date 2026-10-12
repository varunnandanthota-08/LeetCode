// Last updated: 10/12/2026, 7:13:12 PM
class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(x-z)<abs(y-z))return 1;
        else if(abs(x-z)>abs(y-z))return 2;
        return 0;
    }
};