// Last updated: 10/12/2026, 7:22:51 PM
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