// Last updated: 10/12/2026, 7:14:43 PM
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