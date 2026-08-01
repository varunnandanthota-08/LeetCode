// Last updated: 8/2/2026, 12:56:18 AM
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        //abcd
        //cdab
        for(int i=0;i<s1.size()-2;i++){
            char c1=s1[i];
            char c2=s1[i+2];
            if(c1==s2[i+2]&&c2==s2[i]){
                swap(s1[i],s1[i+2]);
            }
            if(s1==s2){
                return true;
            }
        }
        return false;
    }
};