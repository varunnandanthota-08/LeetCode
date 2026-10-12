// Last updated: 10/12/2026, 7:11:44 PM
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