#include "../header/my_stdlib.h"

char *ft_strtrim(char const *s)
{
    int i;
    int e;
    char *res;

    i = 0;
    e = 0;
    res = (char *)malloc(ft_strlen(s));

    if (res == NULL)
    {
        return NULL;
    }

    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    {
        i++;
    }

    while ((s[i] != '\0') && (s[i] != ' ' || s[i] != '\n' || s[i] != '\t'))
    {
        res[e] = s[i];
        i++;
        e++;
    }
    return res;
}