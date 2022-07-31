#include "../header/my_stdlib.h"

char *ft_strdup(const char *s)
{
    char *dest;
    int i;

    i = 0;
    dest = (char *)malloc(ft_strlen(s));

    while (s[i] != '\0')
    {
        dest[i] = s[i];
        i++;
    }
    return dest;
}