// Last updated: 8/2/2026, 1:02:48 AM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int row=0;
        int col=cols-1;
        while(row<rows&&col>=0){
            if(matrix[row][col]==target)return true;
            else if(matrix[row][col]>target)col--;
            else if(matrix[row][col]<target)row++;
        }
        return false;
    }
};