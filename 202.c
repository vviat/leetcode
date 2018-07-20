inline int num(int x) {
    int ret = 0, temp;
    while(x) {
        temp = x % 10;
        ret += temp * temp;
        x /= 10;
    }
    return ret;
}
bool isHappy(int n) {
    int p = n, q = n;
    do {
        p = num(p);
        q = num(q);
        q = num(q);
    } while (p != q && q != 1);
    return q == 1;
}
