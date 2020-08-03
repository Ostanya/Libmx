#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    char *res;
    int i;
    int j;

    if (!str || !sub) {
        return -2;
    }
    i = mx_strlen(str);
    res = mx_strstr(str, sub);
    if (res == NULL)
        return -1;
    j = i - mx_strlen(res);
    return j;
}
