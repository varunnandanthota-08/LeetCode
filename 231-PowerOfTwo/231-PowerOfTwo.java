// Last updated: 8/2/2026, 1:03:04 AM
class Solution {
    public boolean isPowerOfTwo(int n) {
        int val = (int) Math.ceil(Math.sqrt(n));
        for(int i=0;i<=val;i++){
            if(Math.pow(2,i)==n){
                return true;
            }
            
        }
        return false;
    }
}