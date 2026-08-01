// Last updated: 8/2/2026, 12:58:33 AM
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=1;i<arr.size();i++){
            arr[i]=min(arr[i],arr[i-1]+1);
        }
        return arr[arr.size()-1];
    }
};