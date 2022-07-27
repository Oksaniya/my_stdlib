#include "../header/test.h"
#include <string.h>

void test_ft_strncmp(void)
{
    printf("\nTEST STR_N_CMP\n\n");

    const char s1[27] = "Hello Worl!dHello World!";
    const char s2[13] = "Hello World!";
    int res;
    int ress;

    res = ft_strncmp(s1, s2, 5);
    printf("RES1 = %i\n", res);

    ress = strncmp(s1, s2, 5);
    printf("RESS = %i\n", ress);

    const char s12[] = "6Hello Worl!dHello World!";
    const char s22[13] = "Hello World!";
    int res2;
    int res3;

    res2 = ft_strncmp(s12, s22, 22);
    printf("RES2 = %i\n", res2);

    res3 = strncmp(s12, s22, 22);
    printf("RES3 = %i\n", res3);

    const char s14[] = "!";
    const char s24[] = "Hello World";
    int res4;
    int res44;

    res4 = ft_strncmp(s14, s24, 6);
    printf("RES4 = %i\n", res4);

    res44 = strncmp(s14, s24, 6);
    printf("RES44 = %i\n", res4);
}