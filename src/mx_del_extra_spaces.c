#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *new_str = mx_strtrim(str);
    char *res = mx_strnew(mx_strlen(new_str) + 1);
    int j = 0;

    if (!str) {
        return NULL;
    }
    for(int i = 0; i < mx_strlen(new_str); i++) {
        int k = 1;
        while(mx_isspace(new_str[i]) && mx_isspace(new_str[i + k])) {
            k++;
        }
        res[j] = (k==0) ? res[i] : ' ';
        i += k - 1;
        j++;
    }
    res[j] = '\0';
    if (!new_str) {
        mx_strdel(&new_str);
    }
    return res;
}

// char *mx_del_extra_spaces(const char *str) {
//     char *new_str = mx_strtrim(str) + 1;
//     char *res;
//     int i = 0;
//     int j = 0;

//     while (new_str[i] != '\0') {
//         if (mx_isspace(new_str[i])) {
//             new_str[j] = ' ';
//             j++;
//             while (mx_isspace(new_str[i])) i++;
//         }
//         new_str[j++] = new_str[i++];
//     }
//     new_str[j] = '\0';
//     res = mx_strnew(j);
//     res = mx_strncpy(res, new_str, j + 1);
//     mx_strdel(&new_str);
//     return res;
// }
