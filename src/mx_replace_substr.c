#include "libmx.h"

static int mx_strncmp(const char *s1, const char *s2, int n) {
    while (n--) {
        if (*s1 != *s2)
            return *s1 - *s2;
        ++s1;
        ++s2;
    }
    return 0;
}

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
    if (!str || !sub || !replace)
    {
        return NULL;
    }

    unsigned int string_len = mx_strlen(str);
    unsigned int sub_len = mx_strlen(sub);
    unsigned int rep = mx_strlen(replace);
    unsigned int count = mx_count_substr(str, sub);
    unsigned int new_len = string_len - sub_len * count + rep * count;

    char* new_str = mx_strnew(new_len);

    unsigned int k = 0;
    while(*str && k < new_len)
    {
       if (mx_strncmp(str, sub, sub_len) == 0)
       {
           for (unsigned int j = 0; j < rep; j++, k++)
           {
               new_str[k] = replace[j];
           }
           str = str + sub_len - 1;
       }
       else
       {
           new_str[k] = *str;
           k++;
       }
       str++;
    }
    return new_str;
}
