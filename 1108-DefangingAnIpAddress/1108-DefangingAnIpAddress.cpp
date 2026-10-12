// Last updated: 10/12/2026, 7:21:07 PM
class Solution {
public:
    string defangIPaddr(string address) {
         string res="";
        for(char c:address){
            if(c=='.'){
                res+="[.]";
            }
            else res+=c;
        }
        return res;
    }
};