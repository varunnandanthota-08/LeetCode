// Last updated: 10/27/2026, 8:39:30 PM
class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        map<pair<int,int>,bool>vis;
        int i=0,j=0;
        vis[{i,j}]=true;
        while(i>=0&&j>=0&&i<m&&j<n){
            if(j<n&&grid[i][j]=='R'){
                if(j+1<n&&!vis[{i,j+1}]){
                    j++;
                    vis[{i,j}]=true;
                }
                else break;
            }
            else if(j>=0&&grid[i][j]=='L'){
                if(j-1>=0&&!vis[{i,j-1}]){
                    j--;
                    vis[{i,j}]=true;
                }
                else break;
            }
            else if(i<m&&grid[i][j]=='U'){
                
                if(i-1>=0&&!vis[{i-1,j}]){
                    i--;
                    vis[{i,j}]=true;
                }
                else break;
            }
            else if(i>=0&&grid[i][j]=='D'){
               
                if(i+1<m&&!vis[{i+1,j}]){
                    i++;
                    vis[{i,j}]=true;
                }
                else break;
            }
            else{
                break;
            }
            if(i>m||j>n){
                break;
            }
        }
        return {i,j};
    }
};