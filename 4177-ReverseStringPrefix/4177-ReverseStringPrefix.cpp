// Last updated: 8/2/2026, 12:54:15 AM
class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};