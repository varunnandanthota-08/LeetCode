// Last updated: 8/2/2026, 1:05:03 AM
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,ans,ds,nums);
        return ans;
    }
    void solve(int idx,vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            solve(idx+1,ans,ds,nums);
            swap(nums[idx],nums[i]);
        }
    }
};