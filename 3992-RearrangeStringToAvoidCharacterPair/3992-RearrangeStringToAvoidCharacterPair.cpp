// Last updated: 10/12/2026, 7:09:12 PM
class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans;
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(auto it:mp){
            if(it.first==y){
                for(int i=0;i<it.second;i++){
                    ans+=it.first;
                }
            }
        }
        for(auto it:mp){
            if(it.first!=y){
                for(int i=0;i<it.second;i++){
                    ans+=it.first;
                }
            }
        }
        return ans;
    }
};