// Last updated: 10/12/2026, 7:11:28 PM
class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};