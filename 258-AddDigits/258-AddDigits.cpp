// Last updated: 8/2/2026, 1:02:44 AM
class Solution {
public:
    int addDigits(int num) {
        if(num==0)return 0;
        return (num%9==0)?9:num%9;
    }
};