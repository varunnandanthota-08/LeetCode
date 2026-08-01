// Last updated: 8/2/2026, 12:56:07 AM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for(int i=0;i<words.size();i++){
            string word=words[i];
            if(word.find(x)!=string::npos){
                v.push_back(i);
            }
        }
        return v;
    }
};