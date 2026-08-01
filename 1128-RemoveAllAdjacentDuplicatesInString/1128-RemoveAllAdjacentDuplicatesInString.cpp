// Last updated: 8/2/2026, 1:00:37 AM
class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        for(char c:s){
            if(!res.empty()&&res.back()==c){
                res.pop_back();
            }
            else res.push_back(c);
        }
        return res;
    }
};