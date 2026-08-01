// Last updated: 8/2/2026, 1:05:38 AM
#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('||ch=='['||ch=='{'){
                s1.push(ch);
            }
            else if(ch==')'||ch==']'||ch=='}'){
                if(s1.empty()) return false;
                else if(s1.top()=='('){
                    if(ch==')'){
                        s1.pop();
                    }
                    else return false;
                }
                else if(s1.top()=='['){
                    if(ch==']'){
                        s1.pop();
                    }
                    else return false;
                }
                else if(s1.top()=='{'){
                    if(ch=='}'){
                        s1.pop();
                    }
                    else return false;
                }
            }
        }
        if(s1.empty()){
            return true;
        }
        return false;
    }
};