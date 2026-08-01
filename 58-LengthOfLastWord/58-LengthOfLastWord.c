// Last updated: 8/2/2026, 1:04:43 AM
int lengthOfLastWord(char* s) {
    int l = strlen(s);
    int i = l - 1;
    int length = 0;
    while (i >= 0 && s[i] == ' ') i--;
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}
