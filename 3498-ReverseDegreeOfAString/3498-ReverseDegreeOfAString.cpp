// Last updated: 10/12/2026, 7:13:21 PM
class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=(26-(s[i]-'a'))*(i+1);
        }
        return ans;
    }
};