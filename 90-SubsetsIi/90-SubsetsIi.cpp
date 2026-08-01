// Last updated: 8/2/2026, 1:04:16 AM
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,nums,ans,ds);
        return ans;
    }
    void solve(int idx,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
        ans.push_back(ds);
        for(int i=idx;i<nums.size();i++){
            if(i>idx&&nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            solve(i+1,nums,ans,ds);
            ds.pop_back();
        }
        return;
    }
};