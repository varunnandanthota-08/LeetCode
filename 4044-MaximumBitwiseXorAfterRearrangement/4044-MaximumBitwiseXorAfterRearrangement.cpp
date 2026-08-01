// Last updated: 8/2/2026, 12:54:55 AM
class Solution {
public:
    string maximumXor(string s, string t) {
        int so=0;
        int sz=0;
        int to=0;
        int tz=0;
        for(char c:s){
            if(c=='1')so++;
            else sz++;
        }
        for(char c:t){
            if(c=='1')to++;
            else tz++;
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(tz>0){
                    res+='0';
                    tz--;
                }
                else{
                    res+='1';
                    to--;
                }
            }
            else{
                if(to>0){
                    res+='1';
                    to--;
                }
                else{
                    res+='0';
                    tz--;
                }
            }
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=res[i]){
                ans+='1';
            }
            else{
                ans+='0';
            }
        }
        return ans;
    }
};