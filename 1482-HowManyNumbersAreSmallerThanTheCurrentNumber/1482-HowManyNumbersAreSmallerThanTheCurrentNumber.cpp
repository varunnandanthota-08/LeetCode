// Last updated: 8/2/2026, 12:59:36 AM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(j!=i&&nums[j]<nums[i]){
                    c+=1;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};