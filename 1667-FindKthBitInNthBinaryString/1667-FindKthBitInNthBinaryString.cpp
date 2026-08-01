// Last updated: 8/2/2026, 12:59:12 AM
class Solution {
public:
    char findKthBit(int n, int k) {
        string res=func(n);
        return res[k-1];
    }
    string func(int n){
        if(n==1)return "0";
        return func(n-1)+"1"+bin(func(n-1));
    }
    string bin(string s){
        for(char &c:s){
            if(c=='1')c='0';
            else c='1';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
// 101001
// 010110
// 011010
