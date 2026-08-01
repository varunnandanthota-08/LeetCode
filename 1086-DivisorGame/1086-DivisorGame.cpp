// Last updated: 8/2/2026, 1:00:39 AM
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