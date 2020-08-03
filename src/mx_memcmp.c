#include "libmx.h"

int  mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned const char	*str1;
    unsigned const char	*str2;

    str1 = (unsigned const char *)s1;
    str2 = (unsigned const char *)s2;

    if (str1 == '\0' || str2 == '\0') {
        return 0;
    }
    while (n) {
        if (*str1 != *str2)
            return *str1 - *str2;
        str2++;
        str1++;
        n--;
    }
    return 0;
}
