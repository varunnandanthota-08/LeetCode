// Last updated: 8/2/2026, 1:00:16 AM
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        long long minDiff=INT_MAX;
        for(int i=0;i<n-1;i++){
            long long diff=arr[i+1]-arr[i];
            minDiff=min(minDiff,diff);
        }
        vector<vector<int>>v;
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i])==minDiff){
                v.push_back({arr[i],arr[i+1]});
            }
        
        }
        return v;
    }
};