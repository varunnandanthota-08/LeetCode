// Last updated: 8/2/2026, 1:01:16 AM
class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp2;
        vector<bool>v(26,false);
        for(char c:s){
            mp2[c]++;
        }
        string ans;
        for(int k=0;k<order.size();k++){
            char key=order[k];
            int val=mp2[key];
            int idx=key-'a';
            v[idx]=true;
            ans.append(val,key);
        }
        for(auto &it:mp2){
            char key=it.first;
            int val=it.second;
            int idx=key-'a';
            if(v[idx]!=true){
                ans.append(val,key);
            }
        }
        return ans;
    }
};