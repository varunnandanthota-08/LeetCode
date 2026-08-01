// Last updated: 8/2/2026, 1:03:59 AM
class Solution {
    public int singleNumber(int[] nums) {
        int size=nums.length;
        int i;
        int min=nums[0],max=nums[0];
        for(int num:nums)
        {
            if(num<min)
            {
                min=num;
            }
            if(num>max)
            {
                max=num;
            }
        }
        int offset=-min;
        int[] freq=new int[max-min+1];
        for(i=0;i<size;i++)
        {
            freq[nums[i]+offset]++;
        }
        for(i=0;i<size;i++)
        {
            if(freq[nums[i]+offset]==1)
            {
                return nums[i];
            }
        }
        return 1;
    }
}