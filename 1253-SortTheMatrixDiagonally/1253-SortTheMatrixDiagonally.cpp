// Last updated: 8/2/2026, 1:00:24 AM
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int row1=0,col1=0;
        for(int down=0;down<m;down++){
            vector<int>curr;
            int r1=row1,c1=col1;
            while(r1<m&&c1<n){
                curr.push_back(mat[r1++][c1++]);
            }
            sort(curr.begin(),curr.end());
            int r2=row1,c2=col1;
            int k=0;
            while(k<curr.size()){
                mat[r2++][c2++]=curr[k++];
            }
            row1++;
        }
        int row2=0,col2=1;
        for(int right=1;right<n;right++){
            vector<int>curr;
            int r1=row2,c1=col2;
            while(r1<m&&c1<n){
                curr.push_back(mat[r1++][c1++]);
            }
            sort(curr.begin(),curr.end());
            int r2=row2,c2=col2;
            int k=0;
            while(k<curr.size()){
                mat[r2++][c2++]=curr[k++];
            }
            col2++;
        }
        return mat;
    }
};
//00 01 02 03
//10 11 12 13
//20 21 22 23
