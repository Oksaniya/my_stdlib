#include "../header/test.h"

void test_memset(void)
{
    unsigned char *chlen;

    chlen = (unsigned char *) malloc(100);
   
    int jaja = 0;

    while (jaja < 100)
    {
        printf("%u ", chlen[jaja]);
        if ((jaja % 10 == 0) && (jaja > 9))
        {
            printf("\n");
        }
        jaja++;
    }
    jaja = 0;
    chlen = (unsigned char *) memset((void *) chlen, 5, 50);
       
    while (jaja < 100)
    {
        printf("%u ", chlen[jaja]);
        if ((jaja % 10 == 0) && (jaja > 9))
        {
            printf("\n");
        }
        jaja++;
    }
}