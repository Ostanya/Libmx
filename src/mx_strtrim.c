#include "libmx.h"

char *mx_strtrim(const char *str) {
    char *s = (char *)str;
    char *res = NULL;

    if (!str) {
        return NULL;
    }   
    while((mx_isspace(*s))) {
        s++;
    }

   //delete from the end of str 
    int k = mx_strlen(s);
    while((mx_isspace(s[k-1]))) {
        k--;
    }
    res = mx_strnew(k);
    return mx_strncpy(res, s, k);
}
