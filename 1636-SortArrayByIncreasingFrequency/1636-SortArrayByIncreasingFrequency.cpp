// Last updated: 10/12/2026, 7:18:56 PM
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>v;
        for(int x:nums){
            v.push_back({mp[x],x});
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            return a.first<b.first;
        });
        vector<int>res;
        for(auto &it:v){
            res.push_back(it.second);
        }
        return res;
    }
};