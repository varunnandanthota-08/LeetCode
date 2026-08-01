// Last updated: 8/2/2026, 1:05:33 AM
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        back(n,"",ans);
        return ans;
    }
    void back(int n, string curr, vector<string>&ans){
        if(curr.size()>2*n)return;
        if(curr.size()==(2*n)){
            if(valid(curr)){
                ans.push_back(curr);
                return;
            }
        }
        back(n, curr+'(', ans);
        back(n, curr+')', ans);
    }
    bool valid(string s){
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()&&st.top()=='('){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        return st.size()==0;
    }
};
