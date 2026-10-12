// Last updated: 10/12/2026, 7:18:14 PM
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j&&boxes[j]=='1'){
                    arr[i]+=abs(j-i);
                }
            }
        }

        return arr;
    }
};
