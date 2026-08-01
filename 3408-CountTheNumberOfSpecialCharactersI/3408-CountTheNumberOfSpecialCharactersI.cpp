// Last updated: 8/2/2026, 12:55:59 AM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>st;
        for(char ch:word){
            st.insert(ch);
        }
        int cnt=0;
        map<char,int>mp;
        for(char c:st){
            if(c>='a'&&c<='z'){
                mp[c]++;
            }
            else{
                mp[c+32]--;
            }
        }
        for(auto &it:mp){
            if(it.second==0){
                cnt++;
            }
        }
        return cnt;
    }
};