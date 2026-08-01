// Last updated: 8/2/2026, 1:06:02 AM
class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int n=s.size();
        int maxv=0;
        for(int i=0;i<s.size();i++){
            int curr=0;
            int p1=i,p2=i;
            while(p1>=0&&p2<n&&s[p1]==s[p2])
            {
                p1--;
                p2++;
            }
            curr=p2-p1-1;
            if(curr>maxv){
                maxv=curr;
                string temp;
                for(int j=p1+1;j<p2;j++){
                    temp+=s[j];
                }
                ans=temp;
            }
            p1=i,p2=i+1;
            while(p1>=0&&p2<n&&s[p1]==s[p2]){
                p1--;
                p2++;
            }
            curr=p2-p1-1;
            if(curr>maxv){
                maxv=curr;
                string temp;
                for(int j=p1+1;j<p2;j++){
                    temp+=s[j];
                }
                ans=temp;
            }
        }
        return ans;
    }
};