// Last updated: 10/12/2026, 7:14:39 PM
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int l=0,r=0;
        map<char,int>mp;
        int minv=INT_MAX;
        vector<string>res;
        while(l<n&&r<n){
            mp[s[r]]++;
            while(mp['1']>k){
                if(mp[s[l]]==0)mp.erase(s[l]);
                else mp[s[l]]--;
                l++;
            }
            if(mp['1']==k){
                while(l<=r){
                    if(s[l]=='1')break;
                    l++;
                }
                string str=s.substr(l,r-l+1);
                res.push_back(str);
            }
            r++;
        }
        sort(res.begin(),res.end());
        if(res.size()==0)return "";
        string ans=res[0];
        for(int i=1;i<res.size();i++){
            if(res[i].size()<ans.size()){
                ans=res[i];
            }
            else if(res[i].size()==ans.size()&&res[i]<ans){
                ans=res[i];
            }
        }
        return ans;

    }
};