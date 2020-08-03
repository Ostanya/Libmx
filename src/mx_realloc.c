#include "libmx.h"

void *mx_realloc(void *ptr, size_t size){
    char *new_ptr;
    size_t cur;

    if (ptr == 0) {
        return malloc(size);
    }

    cur = sizeof(ptr);
    if (size <= cur) {
        return ptr;
    }
    new_ptr = malloc(size);
    mx_memcpy(ptr, new_ptr, cur);
    free(ptr);
    return new_ptr;
}
