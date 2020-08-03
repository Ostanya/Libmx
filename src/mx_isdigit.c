#include "libmx.h"

bool mx_isdigit(int c) {
    if((char)c > 47 && (char)c < 58) {
        return 1;
    }
    else{
        return 0;
    }
}
