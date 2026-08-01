// Last updated: 8/2/2026, 1:00:33 AM
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr;
        arr=heights;
        sort(heights.begin(),heights.end());
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=arr[i]){
                c+=1;
            }
        }
        return c;
    }
};