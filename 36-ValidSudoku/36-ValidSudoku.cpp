// Last updated: 8/2/2026, 1:05:13 AM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return solve(board);
    }
    bool solve(vector<vector<char>>&board){
        int p=0,q=0;
        int r=2,s=2;
        while(p<=6){
            map<char,int>mp;
            for(int i=p;i<=r;i++){
                for(int j=q;j<=s;j++){
                    if(board[i][j]=='.')continue;
                    if(mp.find(board[i][j])!=mp.end()){
                        return false;
                    }
                    mp[board[i][j]]++;
                }
            }
            if(q<6){
                q=q+3;
                s=s+3;
            }
            else{
                q=q-6;
                p=p+3;
                r=r+3;
                s=s-6;
            }
        }
        for(int i=0;i<board.size();i++){
            int cnt=0;
            map<char,int>mp;
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    cnt++;
                    mp[board[i][j]]++;
                }
            }
            if(mp.size()!=cnt)return false;
        }
        for(int i=0;i<board.size();i++){
            int cnt=0;
            map<char,int>mp;
            for(int j=0;j<board[i].size();j++){
                if(board[j][i]!='.'){
                    cnt++;
                    mp[board[j][i]]++;
                }
            }
            if(mp.size()!=cnt)return false;
        }
        return true;
    }
};