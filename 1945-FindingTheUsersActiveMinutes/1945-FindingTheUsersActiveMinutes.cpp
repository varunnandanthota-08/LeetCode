// Last updated: 8/2/2026, 12:58:34 AM
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,map<int,int>>mp;
        map<int,int>curr;
        for(int i=0;i<logs.size();i++){
            int id=logs[i][0];
            int time=logs[i][1];
            mp[id][time]++;
        }
        for(auto &it:mp){
            curr[it.second.size()]++;
        }
        vector<int>ans(k,0);
        for(auto &it:curr){
            ans[it.first-1]=it.second;
        }
        return ans;
    }
};
