// Last updated: 8/2/2026, 12:55:28 AM
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>res;
        for(int x:nums){
            if(!(x&1)){
                res.push_back(0);
            }
        }
        for(int x:nums){
            if(x&1){
                res.push_back(1);
            }
        }
        return res;
    }
};