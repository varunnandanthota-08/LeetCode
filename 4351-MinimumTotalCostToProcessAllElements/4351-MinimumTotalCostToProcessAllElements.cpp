// Last updated: 8/2/2026, 12:52:57 AM
class Solution {
public:
    const int mod=1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        long long temp=k,cost=0,cnt=1;
        for(int x:nums){
            if(x>temp){
                long long diff=(x-temp+k-1)/k;
                temp+=1L*diff*k;
                temp-=x;
                cost+=solve(cnt,diff)%mod;
                cnt+=diff;
            }
            else{
                temp-=x;
            }
        }
        return cost%mod;
    }
    long long solve(long long x,long long diff){
        long long a=diff;
        long long b=2LL*x+diff-1;
        if(a&1)b/=2;
        else a/=2;
        return (a%mod)*(b%mod)%mod;
    }
};