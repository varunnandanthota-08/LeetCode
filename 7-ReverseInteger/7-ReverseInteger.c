// Last updated: 8/2/2026, 1:05:59 AM
#include <limits.h>

int reverse(int x) {
    int R = 0;
    while (x != 0) {
        int r = x % 10;

        if (R > INT_MAX / 10 || (R == INT_MAX / 10 && r > 7))
            return 0;
        if (R < INT_MIN / 10 || (R == INT_MIN / 10 && r < -8)) 
            return 0;

        R = R * 10 + r;
        x = x / 10;
    }
    return R;
}
