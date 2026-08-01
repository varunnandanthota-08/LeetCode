// Last updated: 8/2/2026, 12:58:56 AM
class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(char c:n){
            ans=max(ans,c-'0');
        }
        return ans;
    }
};