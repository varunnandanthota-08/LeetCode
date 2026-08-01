// Last updated: 8/2/2026, 12:57:14 AM
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        int size=(n-2);
        vector<vector<int>>matrix(size,vector<int>(size));
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                int max_l=0;
                for(int p=i;p<i+3;p++){
                    for(int q=j;q<j+3;q++){
                        max_l=max(max_l,grid[p][q]);
                    }
                }
                matrix[i][j]=max_l;
            }
        }
        return matrix;
    }
};
