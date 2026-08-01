// Last updated: 8/2/2026, 12:55:39 AM
class Solution {
public:
    string stringHash(string s, int k) {
        string ans;
        int cnt=0;
        int curr=0,val=0;
        for(int i=0;i<s.size();i++){
            cnt++;
            val=s[i]-'a';
            curr+=val;
            if(cnt%k==0){
                int temp=curr%26;
                curr=0;
                char ch='a'+temp;
                ans+=ch;
            }
        }
        return ans;
    }
};