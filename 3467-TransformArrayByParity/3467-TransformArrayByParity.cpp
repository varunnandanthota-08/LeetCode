// Last updated: 10/12/2026, 7:13:22 PM
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