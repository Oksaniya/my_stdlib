#include "../header/my_stdlib.h"

void ft_strclr(char *s)
{
    int i;

    i = 0;

    if (s == NULL)
    {
        return;
    }

    while (s[i] != '\0')
    {
        s[i] = '\0';
        i++;
    }
}