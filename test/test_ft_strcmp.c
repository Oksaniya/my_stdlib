#include "../header/test.h"
#include <string.h>

void test_ft_strcmp(void)
{
    printf("\nTEST STR_CMP\n\n");

    const char s1[27] = "Hello Worl!dHello World!";
    const char s2[13] = "Hello World!";
    int res;
    int ress;

    res = ft_strcmp(s1, s2);
    printf("RES1 = %i\n", res);

    ress = strcmp(s1, s2);
    printf("RESS = %i\n", ress);

    const char s12[] = "6Hello Worl!dHello World!";
    const char s22[13] = "Hello World!";
    int res2;
    int res3;

    res2 = ft_strcmp(s12, s22);
    printf("RES2 = %i\n", res2);

    res3 = strcmp(s12, s22);
    printf("RES3 = %i\n", res3);

    const char s14[] = "!";
    const char s24[] = "Hello World";
    int res4;
    int res44;

    res4 = ft_strcmp(s14, s24);
    printf("RES4 = %i\n", res4);

    res44 = strcmp(s14, s24);
    printf("RES44 = %i\n", res4);
}