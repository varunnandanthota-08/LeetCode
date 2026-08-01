// Last updated: 8/2/2026, 1:00:28 AM
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