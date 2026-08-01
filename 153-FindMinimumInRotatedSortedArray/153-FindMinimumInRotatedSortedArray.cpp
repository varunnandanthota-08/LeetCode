// Last updated: 8/2/2026, 1:03:38 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int min_elem=0;
        if(nums.size()==1)
        {
            return nums[0];
        }
        while(left<right)  
        {
             min_elem=min(nums[left],nums[right]);
            if(nums[left]<nums[right])
            {
                right--;
            }
            else{
                left++;
            }
        }
        return min_elem;
    }
};