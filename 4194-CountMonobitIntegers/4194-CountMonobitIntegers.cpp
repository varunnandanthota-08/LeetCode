// Last updated: 8/2/2026, 12:54:12 AM
class Solution {
public:
    bool bin(int n){
        if(n==0||n==1)return true;
        int cz=0;
        int co=0;
        while(n>0){
            if((n&1)==0){
                cz+=1;
            }
            else{
                co+=1;
            }
            n=n>>1;
        }
        if(co==0&&cz!=0)return true;
        if(cz==0&&co!=0)return true;
        return false;
    }
    int countMonobit(int n) {
        int cnt=0;
        for(int i=0;i<=n;i++){
            if(bin(i)){
                cnt+=1;
            }
        }
        return cnt;
    }
};