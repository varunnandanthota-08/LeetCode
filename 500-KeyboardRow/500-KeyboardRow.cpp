// Last updated: 8/2/2026, 1:01:52 AM
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string fs="qwertyuiop";
        string ss="asdfghjkl";
        string ts="zxcvbnm";
        vector<string>res;
        for(int i=0;i<words.size();i++){
            int fc=0;
            int sc=0;
            int tc=0;
            for(int j=0;j<words[i].size();j++){
                char c=tolower(words[i][j]);
                if(fs.contains(c)){
                    fc+=1;
                }
                else if(ss.contains(c)){
                    sc+=1;
                }
                else if(ts.contains(c)){
                    tc+=1;
                }
            }
            if((fc!=0&&sc==0&&tc==0)||(fc==0&&sc!=0&&tc==0)||(fc==0&&sc==0&&tc!=0)){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};