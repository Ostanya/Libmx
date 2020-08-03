#include "libmx.h"

char *mx_itoa(int n) {
    char *str;
    int	temp;
    int	len;
    int	minus;

    len = ((n <= 0) ? 1 : 0);
    minus = ((n < 0) ? -1 : 1);
    temp = n;
    while (++len && temp)
        temp /= 10;
    if (!(str = (char *)malloc(sizeof(char) * len)))
        return NULL;
    str[--len] = '\0';
    *str = '0';
    temp = n;
    while (temp)
    {
        str[--len] = '0' + (minus) * (temp % 10);
        temp /= 10;
    }
    n < 0 ? *str = '-' : 0;
    return (str);
}
