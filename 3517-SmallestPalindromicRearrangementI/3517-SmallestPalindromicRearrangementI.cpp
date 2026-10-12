// Last updated: 10/12/2026, 7:13:18 PM
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