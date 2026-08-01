// Last updated: 8/2/2026, 12:53:09 AM
class Solution {
public:
    int passwordStrength(string password) {
        int strength=0;
        set<char>st;
        for(char c:password){
            st.insert(c);
        }
        for(char c:st){
            if(c>='a'&&c<='z')strength+=1;
            else if(c>='A'&&c<='Z')strength+=2;
            else if(c>='0'&&c<='9')strength+=3;
            else strength+=5;
        }
        return strength;
    }
};