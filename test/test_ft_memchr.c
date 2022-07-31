#include "../header/test.h"

void test_ft_memchr(void)
{
    unsigned char src[10] = {1,2,3,4,5,6,7,8,9,0};
    unsigned char *res;
    unsigned char compare[5] = {6,7,8,9,0};
    int c;
    size_t n;
    int cmp_res;

    c = 6;
    n = 9;

    res = ft_memchr((const void *)src, c, n);
    cmp_res = ft_memcmp((const void *)compare, (const void *)res, 5);
    printf("test memchr\n");
    if ((res - src) == 5 && cmp_res == 0)
    {
        printf("\033[32;4mSUCCESS\033[0m\n");
    }
    else
    {
        printf("\n\033[0;31mFAIL\033[0m\n");
    }
}