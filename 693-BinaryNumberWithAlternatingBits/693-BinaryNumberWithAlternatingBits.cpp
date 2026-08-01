// Last updated: 8/2/2026, 1:01:32 AM
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int num=n;
        bool one=false;
        bool zero=false;
        if(n&1){
            one=true;
        }
        else{
            zero=true;
        }
        n=n>>1;
        while(n>0){
            if((n&1)==1){
                if(!(zero)){
                    return false;
                }
                one=true;
                zero=false;
            }
            else{
                if(!(one)){
                    return false;
                }
                zero=true;
                one=false;
            }
            n=n>>1;
        }
        return true;
    }
};

