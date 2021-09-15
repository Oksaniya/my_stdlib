#include "../header/test.h"

void test_bzero(void)
{
    unsigned char *chlen;
    printf("test bzero\n")
    chlen = (unsigned char *) malloc(100);
    chlen = (unsigned char *) memset((void *)chlen, 1, 90);
   
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
    chlen = (unsigned char *) bzero((void *) chlen, 5, 50);
       
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