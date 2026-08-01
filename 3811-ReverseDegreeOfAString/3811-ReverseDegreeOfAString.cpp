// Last updated: 8/2/2026, 12:55:24 AM
class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=((i+1)*(('z'-s[i])+1));
        }
        return ans;
    }
};