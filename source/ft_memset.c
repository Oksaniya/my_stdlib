#include "../header/my_stdlib.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *chlen = s;
    size_t iterator;
    
    iterator = 0;
    while (iterator < n)
    {
        chlen[iterator] = c;
        iterator ++;
    }
    return s;
}

