// Last updated: 8/2/2026, 12:59:59 AM
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        map<int,vector<int>>mp;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        for(auto &it:mp){
            int cnt=0;
            vector<int>curr=it.second;
            vector<int>temp;
            for(int x:curr){
                cnt++;
                temp.push_back(x);
                if(cnt==it.first){
                    ans.push_back(temp);
                    temp.clear();
                    cnt=0;
                }
            }
        
        }
        return ans;
    }
};
