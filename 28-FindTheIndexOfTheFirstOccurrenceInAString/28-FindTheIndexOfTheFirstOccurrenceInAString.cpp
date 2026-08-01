// Last updated: 8/2/2026, 1:05:23 AM
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())return -1;
        int i=0;
        int j=0;
        int c=0;
        int index=-1;
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
                c+=1;
                i++;
                j++;
                if(c==needle.size()){
                    index=i-needle.size();
                    break;
                }
            }
            else {
                j=0;
                i=i-c+1;
                c=0;
            }
        }
        return index;
    }
};