// Last updated: 10/12/2026, 7:14:11 PM
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        map<int,int>mp;
        int maxv=INT_MIN;
        int l=0,r=0;
        while(l<n&&r<n){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                if(mp[s[l]]==0)mp.erase(s[l]);
                else mp[s[l]]--;
                l++;
            }
            maxv=max(maxv,r-l+1);
            r++;
        }
        return maxv;
    }
};