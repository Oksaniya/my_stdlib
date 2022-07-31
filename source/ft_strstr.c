#include "../header/my_stdlib.h"
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    int nlen;
    int hlen;
    int i;
    int e;
    int inner;
    char *hay;

    nlen = ft_strlen(needle);
    // printf("\nnlen=%d\n", nlen);
    hlen = ft_strlen(haystack);
    // printf("\nhlen=%d\n", hlen);
    i = 0;
    e = 0;
    inner = 0;
    hay = (char *)haystack;

    while (i <= (hlen - nlen))
    {
        e = 0;
        inner = i;
        while (e <= nlen)
        {
            // printf("Haystack[%d]=%c\tneedle[%d]=%c\n",inner,hay[inner],e,needle[e]);
            // printf("\ne=%d\n", e);

            if (needle[e] == '\0')    
            {
                // printf("\ne_in_0_if=%d\n", e);
                return &hay[i];
            }
            if (hay[inner] != needle[e])
            {
                // printf("\ne_in_break_if=%d\n", e);
                // printf("\ninner_in_break_if=%d\n", inner);
                i = inner;
                break;
            }
            inner++;
            e++;
        }
        i++;
    }
    return NULL;
}