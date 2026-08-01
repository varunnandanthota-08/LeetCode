// Last updated: 8/2/2026, 12:56:20 AM
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>s1_e(26);
        vector<int>s1_o(26);
        for(int i=0;i<s1.size();i++){
            //abcdba
            //cabdab
            //e=a,c,b|e=c,b,a
            //o=b,d,a|o=a,d,b
            if(i&1)s1_o[s1[i]-'a']++;
            else s1_e[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            if(i&1)s1_o[s2[i]-'a']--;
            else s1_e[s2[i]-'a']--;
        }
        for(int x:s1_e){
            if(x!=0)return false;
        }
        for(int x:s1_o){
            if(x!=0)return false;
        }
        return true;
    }
};
//odd-odd,even-even