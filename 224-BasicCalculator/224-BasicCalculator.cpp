// Last updated: 8/2/2026, 1:03:03 AM
class Solution {
public:
    int calculate(string s) {
        string ans=func(s);
        return (int)stoll(ans);
    }
    string func(string s){
        vector<string>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')continue;
            if(isdigit(s[i])){
                long long val=0;
                while(i<s.size()&&isdigit(s[i])){
                    val=val*10+(s[i]-'0');
                    i++;
                }
                i--;
                if(!st.empty()&&(st.back()=="+"||st.back()=="-")){
                    long long res=0;
                    long long val1=val;
                    string ch=st.back();
                    st.pop_back();
                    if(st.empty()||st.back()=="("){
                        if(ch=="-"){
                            res=-val1;
                        }
                        else{
                            res=val1;
                        }
                    }
                    else{
                        long long val2=stoll(st.back());
                        st.pop_back();
                        if(ch=="-"){
                            res=val2-val1;
                        }
                        else{
                            res=val1+val2;
                        }
                    }
                    st.push_back(to_string(res));
                }
                else{
                    st.push_back(to_string(val));
                }
            }
            else if(s[i]=='('||s[i]=='+'||s[i]=='-'){
                string op(1,s[i]);
                st.push_back(op);
            }
            else if(s[i]==')'){
                long long res=0;
                string temp=st.back();
                st.pop_back();
                st.pop_back();
                if(!st.empty()&&(st.back()=="+"||st.back()=="-")){
                    long long val1=stoll(temp);
                    string ch=st.back();
                    st.pop_back();
                    if(st.empty()||st.back()=="("){
                        if(ch=="-"){
                            res=-val1;
                        }
                        else{
                            res=val1;
                        }
                    }
                    else{
                        long long val2=stoll(st.back());
                        st.pop_back();
                        if(ch=="-"){
                            res=val2-val1;
                        }
                        else{
                            res=val1+val2;
                        }
                    }
                    st.push_back(to_string(res));
                }
                else{
                    st.push_back(temp);
                }
            }
        }
        string ans="";
        for(auto &it:st){
            ans+=it;
        }
        return ans;
    }
};