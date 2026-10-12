// Last updated: 10/12/2026, 7:13:40 PM
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