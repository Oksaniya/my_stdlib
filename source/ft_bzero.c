#include "../header/my_stdlib.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *chlen;
    size_t iterator;

    chlen = s;
    iterator = 0;

    while (iterator < n)
    {
        chlen[iterator] = 0;
        iterator++;
    }
}