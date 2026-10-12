// Last updated: 10/12/2026, 7:08:41 PM
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int val=(abs(start[0]-target[0])+abs(start[1]-target[1]));
        if(val&1)return false;
        return true;
    }
};