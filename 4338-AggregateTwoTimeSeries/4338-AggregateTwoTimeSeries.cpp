// Last updated: 8/2/2026, 12:52:58 AM
class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto it:series1){
            mp1[it[0]]=it[1];
        }
        for(auto it:series2){
            mp2[it[0]]=it[1];
        }
        set<int>times;
        for(auto &it:series1)times.insert(it[0]);
        for(auto &it:series2)times.insert(it[0]);
        vector<vector<int>>ans;
        for(int t:times){
            auto it1=mp1.lower_bound(t);
            auto it2=mp2.lower_bound(t);
            int v1=(it1==mp1.end())?0:it1->second;
            int v2=(it2==mp2.end())?0:it2->second;
            ans.push_back({t,v1+v2});
        }
        return ans;
    }
};