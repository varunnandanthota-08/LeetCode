// Last updated: 8/2/2026, 1:02:45 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:t){
            freq[c-'a']--;
        }
        for(int i:freq){
            if(i!=0)return false;
        }
        return true;
    }
};