#include "../header/my_stdlib.h"

char * ft_itoa(int n)
{
    char *res;
    int i;
    int reslen;
    int en;

    i = 0;
    reslen = 0;
    en = n;

    //printf("lol\n");
    while (en != 0) 
    {
       // printf("en&10 = %d\n", en%10);
        en = (en / 10);
        reslen++;
     //   printf("en = %d\n", en);
    }
    reslen = reslen + 1;
    //printf("reslen = %d\n", reslen);
    en = n;

    if (n < 0)
    {
        en = en * -1;
        reslen = reslen + 1;
    }

    res = (char *)malloc(reslen);

    if (res == NULL)
    {
        return NULL;
    }

    if (n < 0)
    {
        res[0] = '-';
    }

    i = (reslen - 2);
    while (en != 0)
    {
      //  printf("en&10 = %d\n", en%10);
        res[i] = ((en % 10) + 48);
        en = (en / 10);
        i--;
     //   printf("en = %d\n", en);
    }

    if (n < 0)
    {
        reslen = reslen + 1;
        res[0] = '-';
    }
    return res;
}