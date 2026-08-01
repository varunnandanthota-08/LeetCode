// Last updated: 8/2/2026, 1:02:21 AM
class Solution {
    public boolean isPerfectSquare(int num) {
        if (num < 2) return true;

        long left = 2, right = num / 2;
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long square = mid * mid;
            if (square == num) {
                return true;
            } else if (square > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
}
