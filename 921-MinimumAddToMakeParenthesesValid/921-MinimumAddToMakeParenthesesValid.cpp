// Last updated: 10/12/2026, 7:21:57 PM
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(char c:s)   {
            if(c=='(')st.push(c);
            else{
                if(!st.empty()){
                    if(st.top()=='(')st.pop();
                    else st.push(c);
                }
                else{
                    st.push(c);
                }
            }
        }
        return st.size();
    }
};