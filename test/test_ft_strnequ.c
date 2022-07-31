#include "../header/test.h"

void test_ft_strnequ(void)
{    
    printf("\nTEST STRNEQU\n\n");

    const char s1[27] = "Hello Worl!dHello World!";
    const char s2[13] = "Hello World!";
    int res;

    res = ft_strnequ(s1, s2, 5);
    printf("RES = %i\n", res);

    const char s12[] = "6Hello Worl!dHello World!";
    const char s22[13] = "Hello World!";
    int res1;

    res1 = ft_strnequ(s12, s22, 13);
    printf("RES1 = %i\n", res1);

    const char s122[] = "Hello World!";
    const char s222[13] = "Hello World!";
    int res2;

    res2 = ft_strnequ(s122, s222, 22);
    printf("RES2 = %i\n", res2);
}