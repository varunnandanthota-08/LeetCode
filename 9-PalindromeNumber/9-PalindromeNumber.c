// Last updated: 8/2/2026, 1:06:04 AM
bool isPalindrome(int x) {
    char str1[100],str2[100];
    int l;
    sprintf(str1, "%d", x);
    strcpy(str2,str1);
    l=strlen(str1);
    int start=0,end=(l-1);
    while(start<end)
    {
        char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
    }
    if(strcmp(str1,str2)==0)
        return 1;
    else
        return 0;
}