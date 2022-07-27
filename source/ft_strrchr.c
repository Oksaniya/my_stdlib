#include "../header/my_stdlib.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *src;

    i = ft_strlen(s);
    src = (char *)s;

    while (i >= 0)
    {
        if (src[i] == c)
        {
            return &src[i];
        } 
        i--;
    }
    return NULL;
}