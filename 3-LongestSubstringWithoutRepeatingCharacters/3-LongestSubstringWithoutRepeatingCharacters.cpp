// Last updated: 8/2/2026, 1:06:08 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int l=0;
        int maxl=0;
        for(int i=0;i<s.size();i++){
            while(seen.count(s[i])){
                seen.erase(s[l++]);
            }
            seen.insert(s[i]);
            maxl=max(maxl,i-l+1);
        }
        return maxl;
    }
};