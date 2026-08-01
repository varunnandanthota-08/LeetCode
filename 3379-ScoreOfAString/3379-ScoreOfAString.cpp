// Last updated: 8/2/2026, 12:56:01 AM
class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++){
            int a=s[i];
            int b=s[i+1];
            sum+=abs(a-b);
        }
        return sum;
    }
};