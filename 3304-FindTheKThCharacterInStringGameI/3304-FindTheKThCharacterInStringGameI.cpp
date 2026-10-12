// Last updated: 10/12/2026, 7:13:35 PM
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