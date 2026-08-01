// Last updated: 8/2/2026, 12:57:20 AM
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        return func(nums);
    }
    int func(vector<int>nums){
        if(nums.size()==1)return nums[0];
        vector<int>temp;
        for(int i=1;i<nums.size();i++){
            temp.push_back((nums[i]+nums[i-1])%10);
        }
        return func(temp);
    }
};