// Last updated: 8/2/2026, 1:00:12 AM
class Solution {
public:
    int balancedStringSplit(string s) {
        int cntR=0;
        int cntL=0;
        int ans=0;
        int i=0;
        while(i<s.size()){
            char c1=s[i];
            if(c1=='L'){
                cntL++;
            }
            else{
                cntR++;
            }
            for(int j=i+1;j<s.size();j++){
                char c2=s[j];
                if(c2=='L'){
                    cntL++;
                }
                else{
                    cntR++;
                }
                if(cntL==cntR){
                    ans++;
                    i=j+1;
                    break;
                }
            }
            cntL=0;
            cntR=0;
        }
        return ans;
    }
};