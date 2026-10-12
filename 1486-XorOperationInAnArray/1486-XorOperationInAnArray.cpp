// Last updated: 10/12/2026, 7:19:22 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        int cnt=0;
        int i=start;
        while(cnt<n){
            ans^=i;
            i+=2;
            cnt++;
        }
        return ans;
    }
};