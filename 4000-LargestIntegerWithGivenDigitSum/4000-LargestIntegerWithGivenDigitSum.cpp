// Last updated: 10/12/2026, 7:09:13 PM
class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0)return 0;
        int ans=-1;
        for(int i=0;i<=(pow(10,n))-1;i++){
            int num=i;
            int curr=0;
            while(num>0){
                curr+=(num%10);
                num/=10;
            }
            if(curr==s){
                ans=max(ans,i);
            }
        }
        return ans;
    }
};