// Last updated: 8/2/2026, 1:05:11 AM
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>&board){
        //recursion
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(int k=1;k<=9;k++){
                        if(issafe(board,i,j,k)){
                            board[i][j]=(k+'0');
                            if(solve(board)){
                                return true;
                            }
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool issafe(vector<vector<char>>&board,int row,int col,int num){
        char c=num+'0';
        for(int i=0;i<9;i++){
            if(board[i][col]==c)return false;
            if(board[row][i]==c)return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)return false;
        }
        return true;
    }
};