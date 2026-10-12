// Last updated: 10/12/2026, 7:17:22 PM
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;
        for(string s:patterns){
            if(word.find(s)!=string::npos)ans++;
        }
        return ans;
    }
};