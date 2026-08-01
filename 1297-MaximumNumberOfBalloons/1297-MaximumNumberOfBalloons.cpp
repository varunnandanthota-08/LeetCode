// Last updated: 8/2/2026, 1:00:18 AM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(char c:text){
            if(c=='b'||c=='a'||c=='l'||c=='o'||c=='n'){
                mp[c]++;
            }
        }
        mp['l']/=2;
        mp['o']/=2;
        int ans=min({mp['b'],mp['a'],mp['l'],mp['o'],mp['n']});
        return ans;
    }
};