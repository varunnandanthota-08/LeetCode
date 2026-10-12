// Last updated: 10/12/2026, 7:18:33 PM
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