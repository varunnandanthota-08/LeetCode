// Last updated: 10/12/2026, 7:16:05 PM
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