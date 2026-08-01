// Last updated: 8/2/2026, 12:54:04 AM
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