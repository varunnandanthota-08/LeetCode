// Last updated: 10/12/2026, 7:19:53 PM
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