#include "../header/my_stdlib.h"

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t iterator = 0;
    unsigned char *chlen_dest = (unsigned char*)dest;
    unsigned char *chlen_src = (unsigned char*)src;

    while (iterator < n)
    {
        chlen_dest[iterator] = chlen_src[iterator];
        iterator++;
    }
    return dest;
}