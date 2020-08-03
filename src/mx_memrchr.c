#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
   unsigned char *memr = (unsigned char *)s +n;

    while (n--) {
        if (*memr != (unsigned char)c)
            memr--;
    else
        return memr;
    }
    return NULL;
}
