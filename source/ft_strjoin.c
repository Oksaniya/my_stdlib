#include "../header/my_stdlib.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t len_s1s2;
    size_t i;
    size_t e;

    i = 0;
    e = 0;
    len_s1s2 = (ft_strlen(s1) + ft_strlen(s2));
    res = (char *)malloc(len_s1s2);

    if (res == NULL)
    {
        return NULL;
    }

    while (i < ft_strlen(s1))
    {
        res[i] = s1[i];
        i++;
    //    printf("\ni in first while\n%zu\n", i);
    }
    while (i < len_s1s2)
    {
     //   printf("\ni in 2nd while\n%zu\n", i);
        //printf("\ne in 2nd while\n%zu\n", e);
        res[i] = s2[e];
        i++;
        e++;
    }
  /*  printf("\ni near return\n%zu\n", i); */
    return res;
}
