#include "../header/my_stdlib.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *res;

    res = (char *)ft_memalloc(len);

    if (res == NULL)
    {
        return NULL;
    }

    res = ft_strncpy(res, &(s[start]), len);

    return res;
}

