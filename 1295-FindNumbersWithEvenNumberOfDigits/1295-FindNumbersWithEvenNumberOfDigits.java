// Last updated: 10/12/2026, 7:20:14 PM
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