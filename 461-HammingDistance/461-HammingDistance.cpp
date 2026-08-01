// Last updated: 8/2/2026, 1:01:55 AM
class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y;
        int cc=0;
        string res=bin(z);
        for(char c:res){
            if(c=='1')cc++;
        }
        return cc;
    }
    string bin(int n){
        string res;
        while(n>0){
            int rem=n%2;
            res+=(rem+'0');
            n/=2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};