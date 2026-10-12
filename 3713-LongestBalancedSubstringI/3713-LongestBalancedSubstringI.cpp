// Last updated: 10/12/2026, 7:12:21 PM
class Solution {
public:
    int longestBalanced(string s) {
        int maxv=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                bool flag=false;
                int val=0;
                for(int x:freq){
                    if(x!=0){
                        val=x;
                        break;
                    }
                }
                for(int x:freq){
                    if((x!=val)&&(x!=0)){
                        flag=true;
                    }
                }
                if(flag){
                    continue;
                }
                maxv=max(maxv,j-i+1);
            }
        }
        return maxv;
    }
};