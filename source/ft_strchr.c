#include "../header/my_stdlib.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *src;

    i = 0;
    src = (char *)s;

    while (src[i] != c)
    {
        if (src[i] == '\0')
        {
            return NULL;
        } 
        i++;
    }
    return &src[i];
}