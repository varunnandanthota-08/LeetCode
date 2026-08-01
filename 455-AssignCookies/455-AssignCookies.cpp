// Last updated: 8/2/2026, 1:01:58 AM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0;
        int r=0;
        while(l<s.size()&&r<g.size()){
            if(g[r]<=s[l]){
                r++;
            }
            l++;
        }
        return r;
    }
};