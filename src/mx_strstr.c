#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int i = 0;
    int s = 0;

    if (!*needle)
        return ((char*)haystack);
    while (haystack[i] != '\0')
    {
        s = 0;
        while (haystack[i + s] == needle[s])
        {
            if (needle[s + 1] == '\0')
                return ((char*)haystack + i);
            s++;
        }
        i++;
    }
    return (NULL);
}
