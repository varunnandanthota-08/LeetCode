// Last updated: 10/12/2026, 7:12:56 PM
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