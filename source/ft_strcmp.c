#include "../header/my_stdlib.h"
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    int res;

    i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    if (s1[i] != s2[i])
    {
        res = s1[i] - s2[i];
    }
    return res;
}