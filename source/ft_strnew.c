#include "../header/my_stdlib.h"
#include <stdio.h>

char *ft_strnew(size_t size)
{
    char *str;
   // printf("SIZE=%zu\n", size);
    str = (char *)malloc(size);

    if (str == NULL)
    {
        return NULL;
    }

    ft_bzero((void *)str, size);
    return str;
}