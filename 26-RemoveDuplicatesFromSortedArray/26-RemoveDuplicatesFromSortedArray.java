// Last updated: 8/2/2026, 1:05:34 AM
class Solution {
    public int removeDuplicates(int[] nums) {
        int size=nums.length;
        int c=1,k=0;
        for(int i=0,j=0;i<size&&j<size;j++)
        {
            if(nums[i]!=nums[j])
            {
                c+=1;
                nums[k++]=nums[i];
                i=j;

            }
        }
        nums[k]=nums[size-1];
        return c;
    }
}