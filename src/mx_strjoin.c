#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *res;

    if(s1 == NULL  && s2 == NULL) {
        return NULL;
    }
      else if (s1 == NULL) {
        if (!(res = mx_strdup(s2)))
            return NULL;
    }
    else if (s2 == NULL) {
        if (!(res = mx_strdup(s1)))
            return NULL;
    }
     if (s1 && s2) {
         if (!(res = mx_strnew(mx_strlen(s1) + mx_strlen(s2))))
             return NULL;
         mx_strcat(res, s1);
         mx_strcat(res, s2);
     }
     return res;
}
