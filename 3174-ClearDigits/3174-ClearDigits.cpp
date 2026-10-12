// Last updated: 10/12/2026, 7:13:55 PM
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