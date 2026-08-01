// Last updated: 8/2/2026, 1:01:02 AM
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r1=matrix.size();
        int c1=matrix[0].size();
        vector<vector<int>>trans(c1,vector<int>(r1,0));
        int r2=0;
        int c2=0;
        for(int i=0;i<c1;i++){
            c2=0;
            for(int j=0;j<r1;j++){
                trans[r2][c2++]=matrix[j][i];
            }
            r2++;
        }
        return trans;
    }
};