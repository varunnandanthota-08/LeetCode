// Last updated: 8/2/2026, 12:53:41 AM
class Solution {
public:
    int countCommas(int n) {
        // long long c=0;
        // int num=n;
        // while(num>0){
        //     int rem=num%10;
        //     num/=10;
        //     c+=1;
        // }
        // long long ans=ceil(c/3)-1;
        // return ans;
        if(n<=999)return 0;
        else if(n>=1000&&n<=100000)return n-1000+1;
        return 0;
    }
};