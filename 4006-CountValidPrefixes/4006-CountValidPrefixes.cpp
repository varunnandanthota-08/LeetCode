// Last updated: 10/12/2026, 7:08:40 PM
class Solution {
public:
    int countValidPrefixes(string s) {
        int n=s.size();
        vector<int>pz(n,0);
        vector<int>po(n,0);
        if(s[0]=='0'){
            pz[0]=1;
        }
        else{
            po[0]=1;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='0'){
                pz[i]=pz[i-1]+1;
                po[i]=po[i-1];
            }
            else{
                po[i]=po[i-1]+1;
                pz[i]=pz[i-1];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(abs(pz[i]-po[i])<=1)cnt++;
        }
        return cnt;
    }
};
