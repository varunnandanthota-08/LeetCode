// Last updated: 10/12/2026, 7:22:34 PM
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
