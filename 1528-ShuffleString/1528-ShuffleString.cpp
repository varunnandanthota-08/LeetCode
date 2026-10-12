// Last updated: 10/12/2026, 7:19:14 PM
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    int n=s.size();
    string res(n, ' ');        
    int c=0;
    for(int i=0;i<s.size();i++){
        res[indices[i]]=s[i];
    }
    return res;
    }
};