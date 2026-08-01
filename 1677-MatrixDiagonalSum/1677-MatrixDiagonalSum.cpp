// Last updated: 8/2/2026, 12:59:11 AM
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            sum+=mat[i][n-i-1];
        }
        if(n&1){
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};
