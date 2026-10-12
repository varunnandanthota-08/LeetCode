// Last updated: 10/12/2026, 7:15:16 PM
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans(A.size());
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<A.size();i++)
        {
            mp[A[i]]++;
            mp[B[i]]++;
            if(mp[A[i]]==2)cnt++;
            if(mp[B[i]]==2&&A[i]!=B[i])cnt++;
            ans[i]=cnt;
        }
        return ans;
    }
};
