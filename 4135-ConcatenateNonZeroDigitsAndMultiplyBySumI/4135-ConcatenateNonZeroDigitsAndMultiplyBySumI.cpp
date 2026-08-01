// Last updated: 8/2/2026, 12:54:27 AM
class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        string s=to_string(n);
        string ans;
        long long sum=0;
        for(char c:s){
            if(c!='0'){
                ans+=c;
                sum+=c-'0';
            }
        }
        return (stoi(ans))*sum;
    }
};