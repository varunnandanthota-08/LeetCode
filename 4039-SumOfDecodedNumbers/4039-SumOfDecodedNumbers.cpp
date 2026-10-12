// Last updated: 10/12/2026, 7:08:11 PM
class Solution {
public:
    int sumDecoded(vector<long long>& nums) {
        long long mod=1e9+7;
        long long ans=0;
        for(long long num:nums){
            long long width=num%10;
            long long d=(num/10);
            string s=to_string(d);
            if(width>s.size())continue;
            string a=s.substr(0,width);
            string b=s.substr(width);
            if(a.empty()||b.empty())continue;
            long long x=stoll(a);
            long long y=stoll(b);
            long long curr=solve(x,y);
            ans=(ans+curr)%mod;
        }
        return ans;
    }
    long long solve(long long x,long long y){
        long long mod=1e9+7;
        long long res=1;
        while(y>0){
            if(y&1){
                res=(res*x)%mod;
            }
            x=(x*x)%mod;
            y>>=1;
        }
        return res;
    }
};