// Last updated: 8/2/2026, 12:56:15 AM
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cl=0,cr=0,n=moves.size();
        for(char c:moves){
            if(c=='L')cl++;
            else if(c=='R')cr++;
        }
        int ans=0;
        if(cl>=cr){
            ans=(cl-cr)+(n-(cl+cr));
        }
        else{
            ans=(cr-cl)+(n-(cl+cr));
        }
        return ans;
    }
};