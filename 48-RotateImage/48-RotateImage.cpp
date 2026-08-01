// Last updated: 8/2/2026, 1:05:02 AM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j>i){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
    }
};