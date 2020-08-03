#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    unsigned left = *count = 0;
    unsigned right = size - 1;
    unsigned mid;

    if (!*arr)
        return -1;
    while (left <= right) {
        mid = (right + left) / 2;
        ++*count;
        if (mx_strcmp(arr[mid], s) == 0)
            return mid;
        else if (mx_strcmp(arr[mid], s) > 0)
            right = mid - 1;
        else
            left = mid + 1;
    }
    *count = 0;
    return -1;
}
