// Last updated: 8/2/2026, 1:01:26 AM
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            if(check(i)){
                ans++;
            }
        }
        return ans;
    }
    bool check(int n){
        int cnt=0;
        while(n>0){
            cnt++;
            n=(n&(n-1));
        }
        if(cnt==1)return false;
        for(int i=2;i*i<=cnt;i++){
            if(cnt%i==0){
                return false;            
            }
        }
        return true;
    }
};