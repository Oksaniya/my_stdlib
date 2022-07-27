#include "../header/my_stdlib.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    int i;
    char *s2;
    char *s1;

    i = 0;
    s1 = (char *)s;
    s2 = ft_strnew(ft_strlen(s));
    while (s1[i] != 0)
    {
        s2[i] = f(s1[i]);
        i++;
    }
    return s2;
}
