// Last updated: 10/12/2026, 7:15:03 PM
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<=r){
            if(s[l]!=s[r]){
                if(s[l]<s[r]){
                    s[r]=s[l];
                }
                else{
                    s[l]=s[r];
                }
            }
            l++;
            r--;
        }
        return s;
    }
};