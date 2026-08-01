// Last updated: 8/2/2026, 1:02:00 AM
class Solution {
public:
    string frequencySort(string s) {
        string ans;
        map<char,int>mp;
        for(char c:s)mp[c]++;
        vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](const auto &f,const auto &s){
            return f.second>s.second;
        });
        for(auto &it:v){
            int key=it.first;
            int val=it.second;
            for(int i=0;i<val;i++){
                ans+=it.first;
            }
        }
        return ans;
    }
};