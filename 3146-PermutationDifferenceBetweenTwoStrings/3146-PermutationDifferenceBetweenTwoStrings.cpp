// Last updated: 10/12/2026, 7:14:02 PM
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