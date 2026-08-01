// Last updated: 8/2/2026, 12:58:44 AM
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
