// Last updated: 10/12/2026, 7:09:48 PM
class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string>temp;
        vector<string>ans;
        back(n,"",temp);
        for(string s:temp){
            bool found=true;
            int cost=0;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]==s[i+1]&&s[i]=='1'){
                    found=false;
                    break;
                }
            }
            if(found){
                for(int i=0;i<s.size();i++){
                    if(s[i]=='1'){
                        cost+=i;
                    }
                }
                if(cost<=k){
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
    void back(int n, string curr, vector<string>&res){
        if(curr.size()==n)
        {
            res.push_back(curr);
            return;
        }
        back(n,curr+'0',res);
        back(n,curr+'1',res);
    }
};
