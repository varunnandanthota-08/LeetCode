// Last updated: 8/2/2026, 1:05:09 AM
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(ans,candidates,ds,0,0,target);
        return ans;
    }
    void solve(vector<vector<int>>&ans,vector<int>&candidates,vector<int>ds,int idx,int sum,int target){
        if(sum==target){
            ans.push_back(ds);
            return;
        }
        if(idx==candidates.size()){
            return;
        }
        if(sum+candidates[idx]<=target){
            sum+=candidates[idx];
            ds.push_back(candidates[idx]);
            solve(ans,candidates,ds,idx,sum,target);
            sum-=candidates[idx];
            ds.pop_back();
        }
        solve(ans,candidates,ds,idx+1,sum,target);
        return;
    }
};
