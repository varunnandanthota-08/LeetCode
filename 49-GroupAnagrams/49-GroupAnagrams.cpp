// Last updated: 8/2/2026, 1:04:59 AM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s : strs){
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }   
        vector<vector<string>>ans;
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};