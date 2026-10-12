// Last updated: 10/12/2026, 7:09:40 PM
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