// Last updated: 10/12/2026, 7:08:13 PM
class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int x=abs(source[0]-target[0]);
        int y=abs(source[1]-target[1]);
        if(x==0&&y==0)return 0;
        else if(x==y||x==0||y==0)return 1;
        return 2;
    }
};