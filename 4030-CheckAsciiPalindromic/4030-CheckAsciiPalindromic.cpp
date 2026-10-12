// Last updated: 10/12/2026, 7:08:24 PM
class Solution {
public:
    bool isPalindromic(string s) {
        string str;
        for(char c:s){
            int num=c;
            str+=bitset<8>(num).to_string();
        }
        return solve(str);
    }
    bool solve(string s){
        int l=0,r=s.size()-1;
        while(l<=r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
};