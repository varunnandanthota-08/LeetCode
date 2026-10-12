// Last updated: 10/12/2026, 7:14:56 PM
class Solution {
public:
    string sortVowels(string s) {
        string t1,t2,ans;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                t1+=c;
            }
            else{
                t2+=c;
            }
        }
        sort(t1.begin(),t1.end());
        int i=0,j=0;
        for(char c:s){
            if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')&&(i<t1.size())){
                ans+=t1[i++];
            }
            else if(j<t2.size()){
                ans+=t2[j++];
            }
        }
        return ans;
    }
};