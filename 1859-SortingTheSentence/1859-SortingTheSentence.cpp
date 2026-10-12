// Last updated: 10/12/2026, 7:17:53 PM
class Solution {
public:
    string sortSentence(string s) {
        vector<string>arr(10);
        string word="";
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='1'&&s[i]<='9'){
                int index=s[i]-'0';
                arr[index]=word;
                word="";
                c++;
            }
            else if(s[i]!=' '){
                word+=s[i];
            }
        }
        string res;
        for(int i=1;i<=c;i++){
            res+=arr[i];
            if(i<c)res+=" ";
        }
        return res;
    }
};