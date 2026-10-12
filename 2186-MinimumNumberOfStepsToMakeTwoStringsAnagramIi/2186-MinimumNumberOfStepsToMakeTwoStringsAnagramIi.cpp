// Last updated: 10/12/2026, 7:16:28 PM
class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp1;
        for(char c:s){
            mp1[c]++;
        }
        map<char,int>mp2;
        for(char c:t){
            mp2[c]++;
        }
        int ans=0;
        for(auto &it:mp1){
            char c=it.first;
            if(mp2.find(c)==mp2.end()){
                ans+=it.second;
                int freq=it.second;
                t.append(freq,c);
            }
            else{
                int diff=mp1[c]-mp2[c];
                if(diff>0){
                    int freq=it.second;
                    t.append(freq,c);
                    ans+=diff;
                }
            }
        }
        for(auto &it:mp2){
            char c=it.first;
            if(mp1.find(c)==mp1.end()){
                ans+=it.second;
                int freq=it.second;
                s.append(freq,c);
            }
            else{
                int diff=mp2[c]-mp1[c];
                if(diff>0){
                    int freq=it.second;
                    s.append(freq,c);
                    ans+=diff;
                }
            }
        }
        return ans;
    }
};