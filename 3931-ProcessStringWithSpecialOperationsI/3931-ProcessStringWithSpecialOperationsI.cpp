// Last updated: 8/2/2026, 12:55:13 AM
class Solution {
public:
    string processStr(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                res+=s[i];
            }
            else if(s[i]=='#'){
                res=(res+res);
            }
            else if(s[i]=='%'){
                reverse(res.begin(),res.end());
            }
            else if(s[i]=='*'){
                if(res.size()!=0){
                    res.pop_back();
                }
            }
        }
        return res;
    } 
};