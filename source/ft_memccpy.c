#include "../header/my_stdlib.h"

void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
    size_t iterator = 0;
    unsigned char *chlen_dest = (unsigned char*)dest;
    unsigned char *chlen_src = (unsigned char*)src;

    while (iterator < n)
    {
        if (chlen_src[iterator] == c)
        {
            break ;
        }
        chlen_dest[iterator] = chlen_src[iterator];
        iterator++;
    }
    return dest;
}