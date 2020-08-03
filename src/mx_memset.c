#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    char *s;
    s = b;

    if (b == NULL)
        return (NULL);
    while (len) {
        *s = c;
        s++;
        len--;
    }
    return b;
}
