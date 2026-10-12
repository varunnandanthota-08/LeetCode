// Last updated: 10/12/2026, 7:12:02 PM
class Solution {
public:
    int maxDistinct(string s) {
        set<char>S(s.begin(),s.end());
        return S.size();
    }
};