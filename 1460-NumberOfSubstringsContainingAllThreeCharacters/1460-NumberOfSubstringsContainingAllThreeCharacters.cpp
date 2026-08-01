// Last updated: 8/2/2026, 12:59:44 AM
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int ans=0;
        map<char,int>mp;
        int l=0,r=0;
        while(r<n) {
            mp[s[r]]++;
            while(mp.size()==3){
                ans+=(n-r);
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};