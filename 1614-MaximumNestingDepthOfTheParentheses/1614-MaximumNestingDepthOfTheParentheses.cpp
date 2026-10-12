// Last updated: 10/12/2026, 7:19:01 PM
class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int cnt=0;
        for(char c:s){
            if(c=='(')cnt++;
            else if(c==')'){
                cnt--;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};