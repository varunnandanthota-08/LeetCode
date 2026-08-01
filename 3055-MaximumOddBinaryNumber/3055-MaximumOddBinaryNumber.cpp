// Last updated: 8/2/2026, 12:56:14 AM
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=0;
        int zero=0;
        for(char c:s){
            if(c=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        string res=string(one-1,'1')+string(zero,'0')+'1';
        return res;
    }
};