// Last updated: 8/2/2026, 1:05:58 AM
class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){return false;}
        String str=Integer.toString(x);
        int st=0;
        int end=str.length()-1;
        while(st<end){
            if(str.charAt(st)==str.charAt(end)){
                st++;
                end--;
            }
            else{return false;}
        }
        return true;
    }
}