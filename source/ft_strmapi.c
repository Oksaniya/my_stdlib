#include "../header/my_stdlib.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *s2;
    char *s1;

    i = 0;
    s1 = (char *)s;
    s2 = ft_strnew(ft_strlen(s));
    while (s1[i] != 0)
    {
        s2[i] = f(i, s1[i]);
        i++;
    }
    return s2;
}
