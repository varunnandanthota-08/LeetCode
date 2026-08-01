// Last updated: 8/2/2026, 1:02:26 AM
class Solution {
    public void reverseString(char[] s) {
        int size=s.length;
        char temp;
        for(int i=0,j=size-1;i<j;i++,j--)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
}