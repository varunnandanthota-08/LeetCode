// Last updated: 8/2/2026, 12:56:54 AM
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        vector<int>rowcnt(rows);
        vector<int>colcnt(cols);
        vector<vector<int>>matrix(rows,vector<int>(cols,0));
        for(int i=0;i<grid.size();i++){
            int c=0;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    c++;
                }
            }
            rowcnt[i]=c;
        }
        for(int j=0;j<cols;j++){
            int c=0;
            for(int i=0;i<rows;i++){
                if(grid[i][j]==1){
                    c++;
                }
            }
            colcnt[j]=c;
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int rowpos=i;
                int colpos=j;
                int rz=0,ro=0,cz=0,co=0;
                ro=rowcnt[rowpos];
                co=colcnt[colpos];
                rz=rows-ro;
                cz=cols-co;
                int elem=ro+co-rz-cz;
                matrix[i][j]=elem;
            }
        }
        return matrix;
    }
};