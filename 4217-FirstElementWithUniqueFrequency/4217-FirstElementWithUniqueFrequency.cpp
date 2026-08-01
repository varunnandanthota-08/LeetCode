// Last updated: 8/2/2026, 12:53:52 AM
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
            
        }
        map<int,int>mp2;
        for(auto &it:mp){
            mp2[it.second]++;
        }
        for(int x:nums){
            if(mp2[mp[x]]==1){
                return x;
            }
        }
        return -1;
    }
};