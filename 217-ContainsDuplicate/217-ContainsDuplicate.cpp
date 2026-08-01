// Last updated: 8/2/2026, 1:03:06 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[start])
            {
                return true;
            }
            else{
                start=i;
            }
        }
        return false;
    }
};