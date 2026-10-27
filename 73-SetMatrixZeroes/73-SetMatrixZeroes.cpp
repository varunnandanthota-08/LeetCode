// Last updated: 10/27/2026, 8:47:45 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,int>rows,cols;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(rows[i]!=0||cols[j]!=0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};