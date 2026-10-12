// Last updated: 10/12/2026, 7:19:58 PM
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
