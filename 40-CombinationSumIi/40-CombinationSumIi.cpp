// Last updated: 8/2/2026, 1:05:08 AM
class Solution {
public:
    vector<vector<int>>ans;
    vector<int>ds;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,0,target);
        return ans;
    }
    void solve(vector<int>&candidates,int idx,int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx&&candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            ds.push_back(candidates[i]);
            solve(candidates,i+1,target-candidates[i]);
            ds.pop_back();
        }
    }
};