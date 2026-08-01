// Last updated: 8/2/2026, 12:57:00 AM
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        for(string s:queries){
            for(int i=0;i<dictionary.size();i++){
                int cnt=0;
                for(int j=0;j<dictionary[i].size();j++){
                    char ch=dictionary[i][j];
                    if(s[j]!=dictionary[i][j]){
                        cnt++;
                    }
                }
                if(cnt<=2){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};