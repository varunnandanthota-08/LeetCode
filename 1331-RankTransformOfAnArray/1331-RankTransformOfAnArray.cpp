// Last updated: 10/12/2026, 7:20:52 PM
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