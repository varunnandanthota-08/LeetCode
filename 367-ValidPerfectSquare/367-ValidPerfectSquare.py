# Last updated: 8/2/2026, 1:02:16 AM
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        val=isqrt(num)
        if ((val*val)==num):
            return True
        return False