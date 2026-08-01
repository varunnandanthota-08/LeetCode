// Last updated: 8/2/2026, 1:00:46 AM
class Solution {
public:
    int fib(int n) {
        return func(n);
    }
    int func(int n){
        if(n==0||n==1)return n;
        return func(n-1)+func(n-2);
    }
};