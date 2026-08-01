// Last updated: 8/2/2026, 12:56:03 AM
class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mp;
        for(char c:word){
            mp[c]++;
        }
        vector<pair<char,int>>v(mp.begin(),mp.end());
        int c=0;
        int ans=0;
        sort(v.begin(),v.end(),[](const auto& a, const auto& b){
            return a.second>b.second;
        });
        for(const auto &it:v){
            c++;
            if(c<=8){
                ans+=(1*it.second);
            }
            else if(c>8&&c<=16){
                ans+=(2*it.second);
            }
            else if(c>16&&c<=24){
                ans+=(3*it.second);
            }
            else{
                ans+=(4*it.second);
            }
        }
        return ans;
    }
};