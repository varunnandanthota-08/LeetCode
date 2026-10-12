// Last updated: 10/12/2026, 7:15:51 PM
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