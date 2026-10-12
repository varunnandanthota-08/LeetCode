// Last updated: 10/12/2026, 7:16:20 PM
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