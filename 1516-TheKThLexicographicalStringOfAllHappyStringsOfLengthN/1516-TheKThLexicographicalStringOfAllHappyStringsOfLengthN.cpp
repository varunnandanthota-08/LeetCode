// Last updated: 8/2/2026, 12:59:35 AM
class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string>ans;
        string s;
        solve(ans,n,s);
        sort(ans.begin(),ans.end());
        if(k>ans.size())return "";
        return ans[k-1];
    }
    void solve(vector<string>&ans,int n,string &s){
        if(s.size()==n){
            if(isSafe(s)){
                ans.push_back(s);
            }
            return;
        }
        for(char ch='a';ch<='c';ch++){
            if(s.empty()||s.back()!=ch){
                s.push_back(ch);
                solve(ans,n,s);
                s.pop_back();
            }
        }
    }
    bool isSafe(string s){
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])return false;
        }
        return true;
    }
};