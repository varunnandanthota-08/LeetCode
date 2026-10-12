// Last updated: 10/12/2026, 7:17:13 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                idx=i;
                break;
            }
        }
        if(idx!=-1)reverse(word.begin(),word.begin()+idx+1);
        return word;
    }
};