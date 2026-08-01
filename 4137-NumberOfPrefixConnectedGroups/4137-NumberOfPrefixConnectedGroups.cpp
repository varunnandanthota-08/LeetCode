// Last updated: 8/2/2026, 12:54:24 AM
class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto &w:words){
            if(w.size()>=k){
                mp[w.substr(0,k)]++;
            }
        }
        int ans=0;
        for(auto &it:mp){
            if(it.second>=2){
                ans++;
            }
        }
        return ans;
    }
};