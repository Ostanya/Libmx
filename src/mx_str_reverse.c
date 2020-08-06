#include "libmx.h"

void mx_str_reverse(char *s) {

    int j = mx_strlen(s);
    char k;

    for(int i = 0; i < j/2; i++) {
        k = s[i];
        s[i] = s[j - i - 1];
        s[j- 1 - i] = k;
    }
    s[j] = '\0';
}
