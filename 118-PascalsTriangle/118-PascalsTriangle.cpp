// Last updated: 8/2/2026, 1:04:08 AM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr(numRows);
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                int size=i+1;
                arr[i].resize(size);
                if(j==0||j==i){
                    arr[i][j]=1;
                }
                else{
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                }
            }
        }
        return arr;
    }
};