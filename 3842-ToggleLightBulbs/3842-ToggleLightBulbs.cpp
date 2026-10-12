// Last updated: 10/12/2026, 7:11:14 PM
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>arr;
        map<int,int>mp;
        for(int x:bulbs){
            mp[x]++;
        }
        for(auto &it:mp){
            if(it.second&1){
                arr.push_back(it.first);
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};