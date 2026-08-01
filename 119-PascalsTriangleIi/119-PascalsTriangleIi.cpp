// Last updated: 8/2/2026, 1:04:05 AM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>arr(rowIndex+1);
        vector<vector<int>>arr2(rowIndex+1);
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                int size=i+1;
                arr2[i].resize(size);
                if(j==0||j==i){
                    arr2[i][j]=1;
                }
                else
                {
                    arr2[i][j]=arr2[i-1][j-1]+arr2[i-1][j];
                }
            }
        }
        for(int j=0;j<=rowIndex;j++){
            arr[j]=arr2[rowIndex][j];
        }
        return arr;
    }
};