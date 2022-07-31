#include "../header/my_stdlib.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t iterator = 0;
    unsigned char *chlen = (unsigned char *)dest;
    unsigned char *chlen2 = (unsigned char *)src;
    unsigned char *buffer;

    buffer = (unsigned char *) malloc(sizeof(unsigned char) * n);
    
    buffer = (unsigned char *)ft_memcpy((void *)buffer, (const void *)chlen2, n);
    chlen = (unsigned char *)ft_memcpy((void *)chlen, (const void *)buffer, n);
    
    return dest;
}