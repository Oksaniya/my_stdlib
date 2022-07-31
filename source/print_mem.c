#include "../header/my_stdlib.h"
#include <stdio.h>

void print_mem(void *s, size_t n)
{
    unsigned char *chlen;
    size_t jaja;

    chlen = (unsigned char*) s;
    jaja = 0;

    while (jaja < n)
    {
        printf("%u ", chlen[jaja]);
        if ((jaja % 10 == 0) && (jaja > 9))
        {
            printf("\n");
        }
        jaja ++;
    }
    printf("\n");
}