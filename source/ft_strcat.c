#include "../header/my_stdlib.h"

char *ft_strcat(char *dest, const char *src)
{
    int i;
    int e;

    i = 0;
    e = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[e] != '\0')
    {
        dest[i] = src[e];
        i++;
        e++;
    }
    dest[i] = '\0';
    return dest;
}