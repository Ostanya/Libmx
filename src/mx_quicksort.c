#include "libmx.h"
 
int mx_quicksort(char **arr, int left, int right) {
    int i = left;
    int j = right;
    int tmp = 0;
    char *pivot = arr[(left + (right - left) / 2)];

    if (!arr && !*arr)
        return -1;
    while (i <= j) {
        while (mx_strlen(arr[i]) < mx_strlen(pivot))
            i++;
        while (mx_strlen(arr[j]) > mx_strlen(pivot))
            j--;
        if (arr[i] <= arr[j])
            if ((arr[i] != arr[j]) &&
                (mx_strlen(arr[i]) != mx_strlen(arr[j]))) {
                mx_swap(&arr[i], &arr[j]);
                tmp++;
            }
        i++;
        j--;
    }
    if (left < j)
        tmp += mx_quicksort(arr, left, j);
    if (j < right)
        tmp += mx_quicksort(arr, i, right);
    return tmp;
}
