// Last updated: 8/2/2026, 12:57:11 AM
class Solution {
public:
    string removeStars(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};