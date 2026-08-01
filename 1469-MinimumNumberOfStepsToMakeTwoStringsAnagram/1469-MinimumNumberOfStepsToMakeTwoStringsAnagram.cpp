// Last updated: 8/2/2026, 12:59:41 AM
class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            mp[c]--;
        }
        int ans=0;
        for(auto &it:mp){
            if(it.second>0)ans+=it.second;
        }
        return ans;
    }
};
