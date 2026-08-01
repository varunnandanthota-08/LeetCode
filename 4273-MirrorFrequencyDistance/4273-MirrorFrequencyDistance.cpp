// Last updated: 8/2/2026, 12:53:23 AM
class Solution {
public:
    int mirrorFrequency(string s) {
        map<char,int>mp;
        set<char>st;
        vector<int>al(26,0);
        vector<int>num(10,0);
        for(char c:s){
            st.insert(c);
            mp[c]++;
        }
        long long ans=0;
        for(char c:st){
            char ch=c;
            int curr=0;
            if(isalpha(ch)){
                int val=ch-'a';
                char temp='z'-val;
                if(al[temp-'a']!=1&&al[ch-'a']!=1){
                    curr=abs(mp[temp]-mp[ch]);
                }
                al[temp-'a']=1;
                al[ch-'a']=1;
            }
            else{
                int val=ch-'0';
                char temp='9'-val;
                if(num[temp-'0']!=1&&num[ch-'0']!=1){
                    curr=abs(mp[temp]-mp[ch]);
                }
                num[temp-'0']=1;
                num[ch-'0']=1;
            }
            ans+=curr;
        }
        return ans;
    }
};