// Last updated: 10/12/2026, 7:18:40 PM
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