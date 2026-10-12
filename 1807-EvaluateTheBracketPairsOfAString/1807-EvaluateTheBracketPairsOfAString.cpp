// Last updated: 10/12/2026, 7:18:11 PM
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.size();
        map<string,string>mp;
        for(auto &it:knowledge){
            mp[it[0]]=it[1];
        }
        int i=0;
        string ans;
        while(i<n){
            if(s[i]=='('){
                string key;
                int j=i+1;
                bool flag=false;
                while(j<n){
                    if(s[j]==')'){
                        flag=true;
                        break;
                    }
                    key+=s[j];
                    j++;
                }
                if(flag){
                    if(mp.find(key)!=mp.end()){
                        ans+=mp[key];
                    }
                    else{
                        ans+="?";
                    }
                }
                i=j+1;
            }
            else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};