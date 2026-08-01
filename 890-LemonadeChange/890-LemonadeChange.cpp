// Last updated: 8/2/2026, 1:01:04 AM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool flag=true;
        int cntFives=0;
        int cntTens=0;
        int cntTwentys=0;
        for(int x:bills){
            if(x==5){
                cntFives+=1;
            }
            else if(x==10){
                if(cntFives>=1){
                    cntTens+=1;
                    cntFives-=1;
                }
                else{
                    flag=false;
                    break;
                }
            }
            else if(x==20){
                if(cntTens>=1&&cntFives>=1){
                    cntTwentys+=1;
                    cntTens-=1;
                    cntFives-=1;
                }
                else if(cntFives>=3){
                    cntTwentys+=1;
                    cntFives-=3;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }
};