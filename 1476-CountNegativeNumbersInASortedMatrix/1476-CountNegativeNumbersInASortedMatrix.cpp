// Last updated: 8/2/2026, 12:59:38 AM
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(int i=grid.size()-1;i>=0;i--){
            for(int j=grid[i].size()-1;j>=0;j--){
                if(grid[i][j]>=0){
                    break;
                }
                else if(grid[i][j]<0){
                    c+=1;
                }
            }
        }
        return c;
    }
};