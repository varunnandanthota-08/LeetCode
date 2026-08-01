// Last updated: 8/2/2026, 12:53:47 AM
class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int val1=mp.begin()->first;
        int freq=mp.begin()->second;
        int val2=-1;
        for(auto &it:mp){
            if(it.second!=freq){
                val2=it.first;
                break;
            }
        }
        if(val2==-1)val1=-1;
        vector<int>res={val1,val2};
        return res;
    }
};