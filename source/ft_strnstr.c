#include "../header/my_stdlib.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    int hlen;
    int i;
    int e;
    int inner;
    char *hay;

    hlen = ft_strlen(haystack);
    i = 0;
    e = 0;
    inner = 0;
    hay = (char *)haystack;

    while (i <= (hlen - n))
    {
        e = 0;
        inner = i;
        while (e < n)
        {
          //  printf("Haystack[%d]=%c\tneedle[%d]=%c\n",inner,hay[inner],e,needle[e]);
            if (needle[e] == '\0' || e == (n - 1))    
            {
                return &hay[i];
            }
            if (hay[inner] != needle[e])
            {
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