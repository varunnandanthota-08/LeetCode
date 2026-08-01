// Last updated: 8/2/2026, 1:05:49 AM
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==1)
        {
            return strs[0];
        }
        int[] arr1=new int[strs.length];
        for(int i=0;i<strs.length;i++)
        {
            arr1[i]=strs[i].length();
        }
        int min=arr1[0];
        for(int num:arr1)
        {
            if(num<min)
            {
                min=num;
            }
        }
        String str1="";
        int c;
        for(int i=0;i<min;i++)
        {
            c=0;
            for(int j=1;j<strs.length;j++)
            {
                if(strs[0].charAt(i)==strs[j].charAt(i))
                {
                    c+=1;
                }
                else
                {
                    break;
                }
            }
           if (c != strs.length - 1)
{
    return str1;
}
str1 = str1 + strs[0].charAt(i);

        }
        return str1;

    }
}