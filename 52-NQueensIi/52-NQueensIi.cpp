// Last updated: 8/2/2026, 1:04:51 AM
class Solution {
public:
    int ans=0;
    int totalNQueens(int n) {
        vector<vector<int>>grid(n,vector<int>(n));
        solve(0,grid,n);
        return ans;
    }
    bool solve(int col,vector<vector<int>>&grid,int n){
        if(col==n){
            ans++;
            return true;
        }
        for(int i=0;i<n;i++){
            if(isSafe(grid,i,col,n)){
                grid[i][col]=1;
                solve(col+1,grid,n);
                grid[i][col]=0;
            }
        }
        return false;
    }
    bool isSafe(vector<vector<int>>&grid,int row,int col,int n){
        //row checking
        for(int i=0;i<col;i++){
            if(grid[row][i]==1)return false;
        }
        //left upper
        int i=row,j=col;
        while(i>=0&&j>=0){
            if(grid[i][j]==1)return false;
            i--;
            j--;
        }
        //left lower
        i=row,j=col;
        while(i<n&&j>=0){
            if(grid[i][j]==1)return false;
            i++;
            j--;
        }
        return true;
    }
};