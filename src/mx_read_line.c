#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    char *buff = (char *)malloc(2);
    int bytes;
    int used_buff = 1;

    while ((bytes = read(fd, buff, 1)) > 0) {
        if (bytes == 0) {
           return -1; 
        }
        if (buff[0] == delim) {
            return mx_strlen(*lineptr);
        }
        buff[strlen(buff)] = '\0';
        if (mx_strlen(*lineptr) == (int)(buf_size * used_buff)) {
            char *tmp = (char *) *lineptr;
            *lineptr = mx_strnew(mx_strlen(tmp) + buf_size);
            mx_strcpy(*lineptr, tmp);
            used_buff++;
        }
        mx_strcat(*lineptr, buff);
    }
    return mx_strlen(*lineptr);
}
