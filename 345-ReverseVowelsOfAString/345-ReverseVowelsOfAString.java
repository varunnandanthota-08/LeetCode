// Last updated: 8/2/2026, 1:02:22 AM
class Solution {
    public String reverseVowels(String s) {
        int size=s.length();
        int i=0,j=size-1;
        char temp;
        char[] chars = s.toCharArray();
        while(i<j)
        {
          while(i<j&&!(chars[i] == 'A' || chars[i] == 'E' || chars[i] == 'I' || chars[i] == 'O' || chars[i] == 'U' ||
      chars[i] == 'a' || chars[i] == 'e' || chars[i] == 'i' || chars[i] == 'o' || chars[i] == 'u') ){
    i++;
}

while(i<j&&!(chars[j] == 'A' || chars[j] == 'E' || chars[j] == 'I' || chars[j] == 'O' || chars[j] == 'U' ||
      chars[j] == 'a' || chars[j] == 'e' || chars[j] == 'i' || chars[j] == 'o' || chars[j] == 'u') ){
    j--;
}


            temp=chars[i];
            chars[i]=chars[j];
            chars[j]=temp;
        i++;
        j--;
        }
        return new String(chars);
    }
}