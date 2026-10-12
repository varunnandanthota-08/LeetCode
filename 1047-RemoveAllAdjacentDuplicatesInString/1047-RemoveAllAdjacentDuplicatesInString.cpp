// Last updated: 10/12/2026, 7:21:19 PM
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