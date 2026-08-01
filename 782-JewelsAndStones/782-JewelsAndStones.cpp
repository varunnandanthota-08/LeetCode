// Last updated: 8/2/2026, 1:01:24 AM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cc=0;
        for(char c:stones){
            if(jewels.contains(c)){
                cc+=1;
            }
        }
        return cc;
    }
};