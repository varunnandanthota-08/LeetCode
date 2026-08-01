// Last updated: 8/2/2026, 1:04:34 AM
int mySqrt(int x) {
    if (x == 0||x==1) return x;  

    int k = 0;
    for (int i = 1; i < x; i++) {
        long long sq_i = (long long)i * i;
        long long sq_next = (long long)(i + 1) * (i + 1);

        if (sq_i == x || (sq_i < x && sq_next > x)) {
            k = i;
            break;  
        }
    }
    return k;
}
