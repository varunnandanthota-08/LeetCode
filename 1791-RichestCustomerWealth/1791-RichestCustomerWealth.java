// Last updated: 8/2/2026, 12:58:59 AM
class Solution {
    public int maximumWealth(int[][] accounts) {
        int max=0;
        for(int[] a:accounts){
            int res=0;
            for(int b:a){
                res+=b;
            }
            if(res>max){
                max=res;
            }

        }
        return max;
    }
}