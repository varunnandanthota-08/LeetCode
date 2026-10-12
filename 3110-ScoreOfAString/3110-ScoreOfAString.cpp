// Last updated: 10/12/2026, 7:14:08 PM
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