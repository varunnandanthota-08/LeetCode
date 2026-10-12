// Last updated: 10/12/2026, 7:09:29 PM
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