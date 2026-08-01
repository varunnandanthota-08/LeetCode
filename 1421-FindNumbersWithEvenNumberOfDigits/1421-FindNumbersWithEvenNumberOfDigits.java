// Last updated: 8/2/2026, 12:59:53 AM
class Solution {
    public int findNumbers(int[] nums) {
        int c=0;
        for(int num:nums){
            int k=1;
            k=(int)(Math.log10(num))+1;
            if(k%2==0){
                c+=1;
            }

        }return c;
    }
}