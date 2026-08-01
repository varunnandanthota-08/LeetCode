// Last updated: 8/2/2026, 1:00:56 AM
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int areaxz=0;
        int areayz=0;
        int cnt=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]!=0){
                    cnt++;
                }
            }
        }
        int areaxy=cnt;
        for(int i=0;i<rows;i++){
            int m=0;
            for(int j=0;j<cols;j++){
                m=max(m,grid[i][j]);
            }
            areaxz+=1*m;
        }
        for(int j=0;j<cols;j++){
            int m=0;
            for(int i=0;i<rows;i++){
                m=max(m,grid[i][j]);
            }
            areayz+=1*m;
        }
        return areaxz+areayz+areaxy;
    }
};