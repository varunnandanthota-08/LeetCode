// Last updated: 8/2/2026, 12:55:16 AM
class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
        int cc=0,cv=0;
        for(char c:s){
            mp[c]++;
        }
        for(auto &it:mp){
            if(vowel(it.first))cv=max(cv,it.second);
            else cc=max(cc,it.second);
        }
        return cc+cv;
    }
    bool vowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
        return false;
    }
};