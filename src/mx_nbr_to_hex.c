#include "libmx.h"

    static char turn(int n) {
        if ((n > 9) && (n <= 16))
            return n += 87;
        else if ((n < 10) && (n >= 0))
            return n += 48;
        return -1;
    }

    char *mx_nbr_to_hex(unsigned long nbr) {
        char *res = 0;
        char size = 0;
        int i = 0;
        unsigned long num = nbr;

        for (; num > 0; num /= 16, size++);
        res = (char *)malloc(size + 1);
        for (i = 0; i < size; i++) {
            res[size - i - 1] = turn(nbr % 16);
            nbr /= 16;
        }
        res[(int)size] = 0;
        return res;
}
