// Last updated: 8/2/2026, 12:52:48 AM
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int val=(abs(start[0]-target[0])+abs(start[1]-target[1]));
        if(val&1)return false;
        return true;
    }
};