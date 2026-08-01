// Last updated: 8/2/2026, 12:57:07 AM
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr;
        int xorv=0;
        int curr=0;
        for(int i=0;i<pref.size();i++){
            xorv=curr^pref[i];
            arr.push_back(xorv);
            curr^=xorv;
        }
        return arr;
    }
};