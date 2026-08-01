// Last updated: 8/2/2026, 12:58:47 AM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>prefix(n+1,0);
        for(int i=1;i<prefix.size();i++){
            prefix[i]=prefix[i-1]+gain[i-1];
        }
        int maxv=INT_MIN;
        for(int x:prefix){
            maxv=max(maxv,x);

        }
        return maxv;
    }
};