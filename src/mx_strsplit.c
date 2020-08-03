#include "libmx.h"

char **mx_strsplit(char const *s, char c) {
    int size_arr = mx_count_words(s, c);
    char **res = malloc(sizeof(char *) * (size_arr + 1));
    int count = 0;
    int len = mx_strlen(s);
    int index = 0;

    if (size_arr == 1) {
        res[0] = mx_strdup(s);
        res[1] = NULL;
        return res;
    }
    for (int i = 0; i < len; i++) {
        index = mx_get_char_index(s, c);
        index = index == -1 ? mx_strlen(s) : index;
        if (index) {
            res[count] = mx_strndup(s, index);
            s += mx_strlen(res[count]) - 1;
            i += mx_strlen(res[count]) - 1;
            count++;
        }
        s++;
    } 
    res[size_arr] = NULL;
    return res;
}
