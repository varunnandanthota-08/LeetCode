// Last updated: 8/2/2026, 1:03:52 AM
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        int n=s.size();
        solve(s,ans,ds);
        return ans;
    }
    void solve(string &s,vector<vector<string>>&ans,vector<string>&ds){
        //base case
        if(s==""){
            ans.push_back(ds);
            return;
        }
        //recursion
        for(int i=1;i<=s.size();i++){
            string curr=s.substr(0,i);
            if(isPalindrome(curr)){
                ds.push_back(curr);
                string next=s.substr(i,s.size()-i);
                solve(next,ans,ds);
                ds.pop_back();
            }
        }
        return;
    }
    bool isPalindrome(string s){
        if(s=="")return false;
        int l=0,r=s.size()-1;
        while(l<=r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
};