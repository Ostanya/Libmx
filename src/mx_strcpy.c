#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    int i = 0;

    if(dst == NULL && src == NULL) {
        return NULL;
    }

    while (src[i]) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}
