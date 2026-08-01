// Last updated: 8/2/2026, 12:56:56 AM
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        vector<int>idxs;
        int n=words.size();
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                idxs.push_back(i);
            }
        }
        int minv=INT_MAX;
        for(int x:idxs){
            int pos=abs(startIndex-x);
            int curr=min(pos,abs(pos-n));
            minv=min(minv,curr);
        }
        if(minv==INT_MAX)return -1;
        return minv;
    }
};
//1
//0,4
//(strt-0)/(n-1+strt)
//2,3