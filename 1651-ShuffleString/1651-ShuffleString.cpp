// Last updated: 8/2/2026, 12:59:19 AM
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