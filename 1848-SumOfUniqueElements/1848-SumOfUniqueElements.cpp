// Last updated: 8/2/2026, 12:58:45 AM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int c=0;
        for(auto &it:mp){
            if(it.second==1){
                c+=it.first;
            }
        }
        return c;
    }
};