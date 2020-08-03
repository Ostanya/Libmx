#include "libmx.h"

void mx_swap(char **s1, char **s2) {
    char *t = *s2;
    *s2 = *s1;
    *s1 = t;
}
