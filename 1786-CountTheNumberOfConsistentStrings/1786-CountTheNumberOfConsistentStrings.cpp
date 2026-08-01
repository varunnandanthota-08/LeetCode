// Last updated: 8/2/2026, 12:59:00 AM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>mp;
        int cnt=0;
        for(char c:allowed){
            mp[c]++;
        }
        for(string s:words){
            set<char>st;
            map<char,int>mp1=mp;
            bool flag=true;
            for(char c:s){
                st.insert(c);
            }
            for(char c:st){
                if(mp.find(c)==mp.end()){
                    flag=false;
                    break;
                }
            }
            if(flag)cnt++;
        }
        return cnt;
    }
};