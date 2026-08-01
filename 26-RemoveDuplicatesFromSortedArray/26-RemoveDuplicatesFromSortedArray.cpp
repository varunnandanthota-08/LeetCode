// Last updated: 8/2/2026, 1:05:29 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        for(int fast=1;fast<nums.size();fast++)
        {
            if(nums[slow]!=nums[fast])
            {
                slow++;
                nums[slow]=nums[fast];
            }
        }
        int c=0;
        for(int i=0;i<=slow;i++)
        {
            c+=1;
        }
        return c;
    }
};