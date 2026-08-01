// Last updated: 8/2/2026, 12:58:03 AM
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