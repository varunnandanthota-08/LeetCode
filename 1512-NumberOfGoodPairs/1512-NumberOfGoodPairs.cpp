// Last updated: 10/12/2026, 7:19:19 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]&&i<j){
                    cnt+=1;
                }
            }
        }
        return cnt;
    }
};