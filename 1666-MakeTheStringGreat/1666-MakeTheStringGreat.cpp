// Last updated: 8/2/2026, 12:59:16 AM
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
