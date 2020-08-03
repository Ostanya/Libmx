#include "libmx.h"
int mx_sqrt(int x) {
    int a = 0;
    int b = 0;
    int c = 0;

    if (x < 0)
        return 0;
    if (x == 1)
        return 1;
    b = x / 2 + 1;
    if (b > 46340)
        b = 46341;
    while (a <= b) {
        c = (b - a) / 2 + a;
        if (c * c == x)
            return c;
        else if (c * c > x)
            b = c;
        else
            a = c;
        if (a + 1 == b)
            return 0;
    }
    return 0;
}
