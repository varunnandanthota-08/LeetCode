// Last updated: 8/2/2026, 12:56:05 AM
class Solution {
public:
    int minimumPushes(string word) {
        map<char,vector<char>>mp;
        int cnt=2;
        for(char c:word){
            cnt++;
            if(cnt==10)cnt=2;
            mp[cnt].push_back(c);
        }
        int ans=0;
        for(auto &it:mp){
            int l=it.second.size();
            ans+=(l*(l+1)/2);
        }
        return ans;
    }
};