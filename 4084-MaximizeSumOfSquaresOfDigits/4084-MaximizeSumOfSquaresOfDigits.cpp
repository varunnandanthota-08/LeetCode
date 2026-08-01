// Last updated: 8/2/2026, 12:54:40 AM
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9 * num) {return "";}
        if(sum == 0 && num > 1) 
        {return "";
        }
        string res = "";
        for(int i = 0; i < num; i++) {
            int d = min(9, sum);
            res += char(d + '0');
            sum=sum- d;
        }
        return res; 
    }
};
