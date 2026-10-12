// Last updated: 10/12/2026, 7:11:42 PM
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