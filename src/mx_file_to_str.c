#include "libmx.h"

char *mx_file_to_str(const char *file) {
    char *s;
    int fd = open(file, O_RDONLY);
    int ln = 0;
    char buf[2];

    if (fd < 0)
        return NULL;
    while (read(fd, buf, 1) > 0) {
        ln++;
    }
    close(fd);
    if(ln == 0)
        return NULL;
    fd = open(file, O_RDONLY);
    s = mx_strnew(ln);
    while (read(fd, buf, 1) > 0) {
        s = mx_strcat(s, buf);
    }
    close(fd);
    s[ln] = '\0';
    return s;
}
