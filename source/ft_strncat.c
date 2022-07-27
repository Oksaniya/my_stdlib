#include "../header/my_stdlib.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t e;

    i = 0;
    e = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[e] != '\0' && e < n)
    {
        dest[i] = src[e];
        i++;
        e++;
    }
    dest[i] = '\0';
    return dest;
}