// Last updated: 10/12/2026, 7:21:48 PM
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