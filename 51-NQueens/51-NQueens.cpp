// Last updated: 8/2/2026, 1:04:53 AM
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>leftrow(n,0),upp_left_diag(2*n-1,0),low_left_diag(2*n-1,0);
        solve(0,ans,board,n,leftrow,upp_left_diag,low_left_diag);
        return ans;
    }
    void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n,vector<int>&leftrow,vector<int>&upp_left_diag,vector<int>&low_left_diag){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(leftrow[i]==0&&low_left_diag[i+col]==0&&upp_left_diag[n-1+col-i]==0){
                board[i][col]='Q';
                leftrow[i]=1;
                low_left_diag[i+col]=1;
                upp_left_diag[n-1+col-i]=1;
                solve(col+1,ans,board,n,leftrow,upp_left_diag,low_left_diag);
                board[i][col]='.';
                leftrow[i]=0;
                low_left_diag[i+col]=0;
                upp_left_diag[n-1+col-i]=0;
            }
        }
    }
};