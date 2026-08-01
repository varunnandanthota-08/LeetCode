// Last updated: 8/2/2026, 12:55:56 AM
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]=abs(mp[t[i]]-i);
        }
        for(auto &it:mp){
            ans+=it.second;
        }
        return ans;
    }
};