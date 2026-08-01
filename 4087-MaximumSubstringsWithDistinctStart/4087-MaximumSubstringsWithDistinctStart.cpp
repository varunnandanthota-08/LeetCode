// Last updated: 8/2/2026, 12:54:38 AM
class Solution {
public:
    int maxDistinct(string s) {
        set<char>S(s.begin(),s.end());
        return S.size();
    }
};