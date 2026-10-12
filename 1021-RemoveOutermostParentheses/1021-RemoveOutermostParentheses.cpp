// Last updated: 10/12/2026, 7:21:27 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth=0;
        for(char c:s){
            if(c=='('){
                if(depth>0){
                    ans+=c;
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};