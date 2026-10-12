// Last updated: 10/12/2026, 7:18:19 PM
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