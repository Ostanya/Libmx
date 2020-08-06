#include "libmx.h"

char *mx_strndup(const char *s1, size_t n){
    size_t length = (size_t)mx_strlen(s1) < n ? (size_t)mx_strlen(s1) : n;
    char *dst = mx_strnew(length);

    if (!dst) {
        return NULL;
    }
    return mx_strncpy(dst, s1, n);
}
