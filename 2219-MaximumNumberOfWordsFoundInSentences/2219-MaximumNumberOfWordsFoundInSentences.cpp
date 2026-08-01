// Last updated: 8/2/2026, 12:57:43 AM
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