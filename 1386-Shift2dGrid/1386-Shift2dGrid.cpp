// Last updated: 8/2/2026, 1:00:05 AM
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                ans.push_back(grid[i][j]);
            }
        }
        k=k%(ans.size());
        reverse(ans.begin(),ans.end());
        reverse(ans.begin(),ans.begin()+k);
        reverse(ans.begin()+k,ans.end());
        int idx=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j]=ans[idx++];
            }
        }
        return grid;
    }
};