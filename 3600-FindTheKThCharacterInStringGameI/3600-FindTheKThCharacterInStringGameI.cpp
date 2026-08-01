// Last updated: 8/2/2026, 12:55:34 AM
class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        func(s,k);
        return s[k-1];
    }
    void func(string &s,int k){
        if(s.size()>=k)return;
        string temp="";
        for(int i=0;i<s.size();i++){
            temp+=(s[i]+1);
        }
        s+=temp;
        func(s,k);
    }
};