// Last updated: 8/2/2026, 12:55:49 AM
class Solution {
public:
    string clearDigits(string s) {
        string res;
        for(char c:s){
            if(isalpha(c)){
                res.push_back(c);
            }
            else{
                if(!res.empty()){
                    res.pop_back();
                }
            }
        }
        return res;
    }
};