#include "libmx.h"

void *mx_memcpy(void *dst, const void *src, size_t n) {
    unsigned int i;
    char *cdst = dst;
    const char *csrc = src;


    if (src == NULL || dst == NULL)
        return (NULL);
    i = 0;
    while (i < n) {
        cdst[i] = csrc[i];
        i++;
    }
    return dst;
}
