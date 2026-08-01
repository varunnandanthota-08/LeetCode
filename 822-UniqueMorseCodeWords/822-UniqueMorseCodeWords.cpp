// Last updated: 8/2/2026, 1:01:14 AM
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
            "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
            "..-","...-",".--","-..-","-.--","--.."
        };
        unordered_set<string> st;
        for (string& word : words) {
            string s;
            for (char c : word) {
                s += morse[c - 'a'];
            }
            st.insert(s);
        }
        return st.size();
    }
};
