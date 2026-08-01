// Last updated: 8/2/2026, 12:55:22 AM
class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mp;
        for(char c:s)mp[c]++;
        char ch;
        bool flag=false;
        string ans;
        for(auto &it:mp){
            int times=0;
            if(it.second&1){
                times=(it.second-1)/2;
                ch=it.first;
                flag=true;
            }
            else{
                times=it.second/2;
            }
            for(int i=0;i<times;i++){
                ans+=it.first;
            }
        }
        string rev=ans;
        reverse(rev.begin(),rev.end());
        if(flag){
            ans+=ch;
        }
        return ans+rev;
    }
};