// Last updated: 8/2/2026, 1:02:04 AM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       map<int,int>mp;
       for(int x:nums){
            mp[x]++;
       }
       vector<int>ans;
       for(auto &it:mp){
        if(it.second==2){
            ans.push_back(it.first);
        }
       }
       return ans;
    }
};