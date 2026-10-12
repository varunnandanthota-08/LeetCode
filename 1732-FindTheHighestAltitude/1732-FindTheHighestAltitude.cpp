// Last updated: 10/12/2026, 7:18:24 PM
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