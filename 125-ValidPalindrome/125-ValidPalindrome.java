// Last updated: 8/2/2026, 1:03:58 AM
class Solution {
    public boolean isPalindrome(String s) {
        String str = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        int size = str.length();
        for (int i = 0, j = size - 1; i <= j; i++, j--) {
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
        }
        return true;
    }
}
