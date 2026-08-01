// Last updated: 8/2/2026, 1:04:40 AM
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>temp;
        for(int i=1;i<=n;i++){
            temp.push_back(i);
        }
        string ans;
        solve(temp,n,k,ans);
        return ans;
    }
    void solve(vector<int>&temp,int n,int k,string &s){
        if(temp.size()==0)return;
        int fac=1;
        for(int i=1;i<n;i++)fac*=i;
        int idx=(k-1)/fac;
        s.push_back((temp[idx]+'0'));
        temp.erase(temp.begin()+idx);
        k=(k-1)%fac+1;
        solve(temp,n-1,k,s);
    }
};