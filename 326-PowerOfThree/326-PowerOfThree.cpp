// Last updated: 8/2/2026, 1:02:33 AM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        return solve(n);
    }
    bool solve(int n){
        if(n==1)return true;
        if(n%2==0)return false;
        int curr=n/3;
        if(curr*3!=(n))return false;
        return solve(n/3);
        return false;
    }
};