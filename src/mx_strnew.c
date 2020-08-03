#include "libmx.h"

char *mx_strnew(const int size) {
    char *mmr = NULL;
    int i = 0;

    if (size < 0)
        return NULL;
    mmr = (char *)malloc(sizeof(char) * (size + 1));
    if (!mmr)
        return NULL;
    while (i < size + 1) {
        mmr[i] = '\0';
        i++;
    }
    mmr[i] = '\0';
    return mmr;
}
