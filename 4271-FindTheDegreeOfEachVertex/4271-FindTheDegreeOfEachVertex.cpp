// Last updated: 8/2/2026, 12:53:26 AM
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>arr;
        for(int i=0;i<matrix.size();i++){
            int c=0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1){
                    c++;
                }
            }
            arr.push_back(c);
        }
        return arr;
    }
};