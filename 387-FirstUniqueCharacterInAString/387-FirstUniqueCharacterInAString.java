// Last updated: 8/2/2026, 1:02:10 AM
class Solution {
    public int firstUniqChar(String s) {
        int[] freq = new int[26]; 
        for (int i = 0; i < s.length(); i++) {
            freq[s.charAt(i) - 'a']++;
        }
                for (int i = 0; i < s.length(); i++) {
            if (freq[s.charAt(i) - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
}
