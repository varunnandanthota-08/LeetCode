// Last updated: 8/2/2026, 1:00:22 AM
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>sorted=arr;
        sort(sorted.begin(),sorted.end());
        map<int,int>mp;
        int idx=1;
        for(auto x:sorted){
            if(mp.find(x)==mp.end()){
                mp[x]=idx++;
            }
        }
        for(auto &x:arr){
            x=mp[x];
        }
        return arr;
    }
};