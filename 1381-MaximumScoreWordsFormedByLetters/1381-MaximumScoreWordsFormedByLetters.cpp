// Last updated: 8/2/2026, 1:00:09 AM
class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        map<char,int>mp;
        map<string,int>costs;
        int maxv=0;
        vector<string>temp;
        for(char c:letters){
            mp[c]++;
        }
        for(string s:words){
            map<char,int>mp1=mp;
            bool flag=true;
            int cost=0;
            for(char c:s){
                mp1[c]--;
                if(mp1[c]<0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                for(char c:s){
                    cost+=score[c-'a'];
                }
                costs[s]=cost;
                temp.push_back(s);
            }
        }
        int size=temp.size();
        for(int i=1;i<(1<<size);i++){
            vector<string>curr;
            for(int j=0;j<size;j++){
                if(i&(1<<j)){
                    curr.push_back(temp[j]);
                }
            }
            int cost=0;
            map<char,int>mp2=mp;
            bool flag=true;
            for(string s:curr){
                for(char c:s){
                    mp2[c]--;
                    if(mp2[c]<0){
                        flag=false;
                        break;
                    }
                }
                if(!flag)break;
            }
            if(flag){
                for(string s:curr){
                    cost+=costs[s];
                }
                maxv=max(maxv,cost);
            }
        }
        
        return maxv;
    }
};
//a=2
//c=1
//d=3
//g=1
//0=2
//dog=10, dad=11, good=12
// [dad]=10
// [dog]=11
// [good]=12
// [dad, dog]=21
// [dad, good]=23
// [dog, good]=22
// [dad, dog, good]=33