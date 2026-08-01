// Last updated: 8/2/2026, 12:54:49 AM
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int cnt=0;
        for(int i=num1;i<=num2;i++){
            int val=i;
            cnt=cnt+(f1(val))+(f2(val));
        }
        return cnt;
    }
    int f1(int n){
        int c=0;
        string s=to_string(n);
        for(int i=1;i<s.size()-1;i++){
            if(s[i]>s[i-1]&&s[i]>s[i+1])c++;
        }
        return c;
    }
    int f2(int n){
        int c=0;
        string s=to_string(n);
        for(int i=1;i<s.size()-1;i++){
            if(s[i]<s[i-1]&&s[i]<s[i+1])c++;
        }
        return c;
    }
};