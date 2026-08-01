// Last updated: 8/2/2026, 1:01:08 AM
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(char c1:s){
            if(isalpha(c1)){
                st1.push(c1);
            }
            else if(c1=='#'){
                if(!st1.empty()){
                    st1.pop();
                }
            }
        }
        for(char c2:t){
            if(isalpha(c2)){
                st2.push(c2);
            }
            else if(c2=='#'){
                if(!st2.empty()){
                    st2.pop();
                }
            }
        }
        if(st1.size()!=st2.size())return false;
        while(!st1.empty()&&!st2.empty()){
            if(st1.top()!=st2.top())return false;
            else {
                st1.pop();
                st2.pop();
            }
        }
        return true;
    }
};