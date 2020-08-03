#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int	i = 0;
    char *p = dst;
    
    while (*src && i++ < len)
        *dst++ = *src++;
    while (i++ < len)
        *dst++ = '\0';
    return p;
}
