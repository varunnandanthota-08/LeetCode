// Last updated: 8/2/2026, 1:06:13 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int key=target-nums[i];
            if(mp.find(key)!=mp.end()){
                if(mp[key]<i)return {mp[key],i};
                return {i,mp[key]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};