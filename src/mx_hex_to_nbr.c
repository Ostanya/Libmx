#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long n;
    char *s = (char *) hex;
    int current_value = 0;
    n = 0;

    while (*s) {
        if (*s >= '0' && *s <= '9')
            current_value = *s - '0';
        else if (*s >= 'a' && *s <= 'f')
            current_value = *s - 'a' + 10;
        else if (*s >= 'A' && *s <= 'F')
            current_value =  *s - 'A' + 10;
        else
            return - 1;
        n = 16 * n + current_value;
        s++;
    }
    return n;
}
