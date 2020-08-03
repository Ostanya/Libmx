#include "libmx.h"

void mx_print_unicode(wchar_t c) {
	char code[5] = {0};

    if (c <= 0x80)
        code[0] = ((c >> 0) & 0x7F) | 0x00;
    else if (c <= 0x0800) {
        code[0] = ((c >> 6) & 0x1F) | 0xC0;
        code[1] = ((c >> 0) & 0x3F) | 0x80;
    }
    else if (c <= 0x010000) {
        code[0] = ((c >> 12) & 0x0F) | 0xE0;
        code[1] = ((c >> 6 ) & 0x3F) | 0x80;
        code[2] = ((c >> 0 ) & 0x3F) | 0x80;
    }
    else {
        code[0] = ((c >> 18) & 0x07) | 0xF0;
        code[1] = ((c >> 12) & 0x3F) | 0x80;
        code[2] = ((c >> 6 ) & 0x3F) | 0x80;
        code[3] = ((c >> 0 ) & 0x3F) | 0x80;
    }
    write(1, code, mx_strlen(code));
}
