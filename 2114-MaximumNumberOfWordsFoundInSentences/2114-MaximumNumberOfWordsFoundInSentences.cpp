// Last updated: 10/12/2026, 7:16:50 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len=sentences.size();
        int max_len=0;
        for(int i=0;i<len;i++){
            int c=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    c+=1;
                }
            }
            if(max_len<=c){
                max_len=c;
            }
        }
        return max_len;
    }
};