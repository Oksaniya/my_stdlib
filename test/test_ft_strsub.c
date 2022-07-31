#include "../header/test.h"

void test_ft_strsub(void)
{
    char *res1;
    char *res2;
    char *res3;    
    const char s[13] = "Hello World!";

    printf("\n\n\nTEST STRSUB\n");

    res1 = ft_strsub(s, 3, 2);
    printf("res1=%s\n", res1);

    res2 = ft_strsub(s, 10, 20);
    printf("res2=%s\n", res2);

    res3 = ft_strsub(s, 0, 2);
    printf("res3=%s\n", res3);
}