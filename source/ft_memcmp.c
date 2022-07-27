#include "../header/my_stdlib.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *chlen1;
    unsigned char *chlen2;
    int res;

    i = 0;
    chlen1 = (unsigned char *)s1;
    chlen2 = (unsigned char *)s2;
    res = 0;

    while (i < n)
    {
        if (chlen1[i] != chlen2[i])
        {
            res = chlen1[i] - chlen2[i];
        }
        i++;
    }
    return res;
}
