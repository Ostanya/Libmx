#include "libmx.h"

int mx_atoi(const char *str) {
    int a = 0;
    int b = 0;
    int c = 1;

    if(str[a] == '-'){
        c = -1;
        a++;
    }
    while(mx_isdigit(str[a]) && !mx_isspace(str[a])) {
        b = b * 10 + str[a] - 48;
        a++;
    }
    return b * c;
}
