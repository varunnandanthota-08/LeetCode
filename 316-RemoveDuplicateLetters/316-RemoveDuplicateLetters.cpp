// Last updated: 8/2/2026, 1:02:34 AM
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>lastocc(26);
        vector<bool>vis(26,false);
        for(int i=0;i<s.size();i++){
            lastocc[s[i]-'a']=i;
        }
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(vis[s[i]-'a'])continue;
            while(!st.empty()&&st.top()>s[i]&&lastocc[st.top()-'a']>i){
                vis[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            vis[s[i]-'a']=true;
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};