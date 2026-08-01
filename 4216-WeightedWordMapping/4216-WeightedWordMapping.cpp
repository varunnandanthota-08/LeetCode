// Last updated: 8/2/2026, 12:53:56 AM
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        char initial='a';
        for(int i=0;i<words.size();i++){
            int sum=0;
            for(int j=0;j<words[i].size();j++){
                char ch=words[i][j];
                int val=weights[ch-'a'];
                sum+=val;
            }
            sum=sum%26;
            int idx=25-sum;
            res+=(initial+idx);
        }
        return res;
    }
};