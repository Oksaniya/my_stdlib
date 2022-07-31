#include "../header/test.h"

void test_ft_memcmp(void)
{
    unsigned char chlen1[10] = {0,1,2,3,4,5,6,7,8,9};
    unsigned char chlen2[10] = {0,1,2,3,4,5,6,7,8,9};
    int res;

    res = 0;
    res = ft_memcmp((const void *)chlen1, (const void *)chlen2, 10);

    if (res == 0)
    {
        printf("\nSUCCESS\nres=%d\n", res);
    }
    else
    {
        printf("\nFAIL\nres=%d\n", res);
    }

    unsigned char chlen3[10] = {0,1,2,3,4,5,6,7,8,9};
    unsigned char chlen4[10] = {0,1,2,3,5,5,6,7,8,9};

    res = 0;
    res = ft_memcmp((const void *)chlen3, (const void *)chlen4, 10);

    if (res != 0)
    {
        printf("\n\033[32;4mSUCCESS\033[0m\nres=%d\n", res);
    }
    else
    {
        printf("\n\033[0;31mFAIL\033[0m\nres=%d\n", res);
    }
    
}