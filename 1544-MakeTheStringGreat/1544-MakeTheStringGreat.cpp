// Last updated: 10/12/2026, 7:19:10 PM
class Solution {
public:
    string makeGood(string s) {
        string res;
        for(char c:s){
            if(!res.empty()){
                char cc=res.back();
                if(abs(cc-c)==32){
                    res.pop_back();
                    continue;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};
