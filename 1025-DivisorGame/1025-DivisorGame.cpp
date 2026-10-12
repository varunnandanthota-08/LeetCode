// Last updated: 10/12/2026, 7:21:24 PM
class Solution {
public:
    bool divisorGame(int n) {
        if(n==2)return true;
        if(isPrime(n))return false;
        else{
            if(n&1)return false;
            else return true;
        }
    }
    bool isPrime(int n){
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)c++;
            if(c>2)return false;
        }
        return true;
    }
};