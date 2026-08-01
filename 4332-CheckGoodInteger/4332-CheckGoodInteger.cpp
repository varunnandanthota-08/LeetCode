// Last updated: 8/2/2026, 12:52:59 AM
class Solution {
public:
    bool checkGoodInteger(int n) {
        int ans=0;
        while(n>0){
            int rem=n%10;
            ans+=(rem*(rem-1));
            n/=10;
        }
        return ans>=50;
    }
};