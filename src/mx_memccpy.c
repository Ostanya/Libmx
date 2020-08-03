#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *s = (unsigned char *) src;
    unsigned char *d = (unsigned char *) dst;
    size_t i = 0;

    if (n == 0) {
        return NULL;
    }
    while (i < n) {
        d[i] = s[i];
        if (s[i] == c)
            return (void *)&(d[i + 1]);
        i++;
    }
    return NULL;
}
