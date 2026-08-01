// Last updated: 8/2/2026, 1:05:14 AM
class Solution {
    public int searchInsert(int[] nums, int target) {
        int size=nums.length;
        int low=0,high=size-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        int i;
        for(i=0;i<size;i++)
        {
            if(nums[i]<target)
            {
                
            }
            else
            {
                break;
            }
        }
        return i;
    }
}