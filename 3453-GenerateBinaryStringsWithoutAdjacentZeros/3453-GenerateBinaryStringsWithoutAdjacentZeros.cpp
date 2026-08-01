// Last updated: 8/2/2026, 12:55:47 AM
class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string>ans;
        back(n,"",ans);
        return ans;
    }
    void back(int n, string curr, vector<string>&ans){
        if(curr.size()==n){
            bool flag=true;
            for(int i=0;i<n-1;i++){
                if((curr[i]==curr[i+1])&&(curr[i]=='0')){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans.push_back(curr);
            }
            return;
        }
        back(n,curr+'0',ans);
        back(n,curr+'1',ans);
    }
};