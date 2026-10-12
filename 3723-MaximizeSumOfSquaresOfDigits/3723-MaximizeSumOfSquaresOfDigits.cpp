// Last updated: 10/12/2026, 7:12:06 PM
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
