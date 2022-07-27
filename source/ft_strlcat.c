#include "../header/my_stdlib.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t res;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    res = 0;

    if (src_len > size)
    {
        res = dest_len + size;
    }
    else
    {
        res = dest_len + src_len;
    }

    while (src[src_len] != '\0' && dest_len + 1 < res)
    {
        dest[dest_len] = src[src_len];
        dest_len++;
        src_len++;
    }
    dest[dest_len] = '\0';
    return res;
}