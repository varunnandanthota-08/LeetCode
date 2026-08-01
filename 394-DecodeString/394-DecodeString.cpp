// Last updated: 8/2/2026, 1:02:08 AM
class Solution {
public:
    string decodeString(string s) {
        return func(s);
    }
    string func(string s){
        string res="";
        vector<string> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                string num(1,s[i]);
                while(i+1<s.size()&&isdigit(s[i+1])){
                    num+=s[i+1];
                    i++;
                }
                st.push_back(num);
            }
            else if(s[i]=='['){
                st.push_back("[");
            }
            else if(isalpha(s[i])){
                string op(1,s[i]);
                if(!st.empty()&&st.back()!="["){
                    op=st.back()+op;
                    st.pop_back();
                }
                st.push_back(op);
            }
            else if(s[i]==']'){
                string temp1="";
                string temp2="";
                while(!st.empty() && st[st.size()-1]!="["){
                    temp2 = st[st.size()-1]+temp2;
                    st.pop_back();
                }
                st.pop_back();
                int val = stoi(st[st.size()-1]);
                st.pop_back();
                for(int i=1;i<=val;i++){
                    temp1 += temp2;
                }
                if(!st.empty() && (st[st.size()-1]!="[")){
                    temp1 =st[st.size()-1]+temp1;
                    st.pop_back();
                }
                st.push_back(temp1);
            }
        }
        for(auto &x:st){
            res+=x;
        }
        return res;
    }
};