// Last updated: 8/2/2026, 1:05:50 AM
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        map<char, int> mp = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        if(s.size()==1){
            ans=mp[s[0]];
            return ans;
        }
        int i=0;
        while(i<s.size()-1){
            int a=mp[s[i]];
            int b=mp[s[i+1]];
            if(a<b){
                ans+=(b-a);
                i+=2;
            }
            else{
                ans+=a;
                i+=1;
            }
        }
        int a=mp[s[s.size()-2]];
        int b=mp[s[s.size()-1]];
        if(a>=b){
            ans+=b;
        }
        return ans;
    }
};