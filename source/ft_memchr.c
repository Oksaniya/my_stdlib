#include "../header/my_stdlib.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *chlen;

    i = 0;
    chlen = (unsigned char *)s;

    while (i < n)
    {
        if (chlen[i] == c)
        {
            break ;
        }
        i++;
    }
    return (void *)(&chlen[i]);
}

// {
//     size_t i;
//     unsigned char *chlen;

//     i = 0;
//     chlen = s;

//     while (i < n)
//     {
//         if (*chlen == c)
//         {
//             break ;
//         }
//         i++;
//         chlen++;
//     }
//     return (void *)chlen;
// }