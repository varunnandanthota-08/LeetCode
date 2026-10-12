// Last updated: 10/12/2026, 7:11:00 PM
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