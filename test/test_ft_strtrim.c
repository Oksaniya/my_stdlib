#include "../header/test.h"

void test_ft_strtrim (void)
{
    const char s1[] = "  Hello world!  ";
    char *res;

    printf("\n\n\nTEST STRTRIM\n");

    res = ft_strtrim(s1);
    printf("res1=%s\n", res);
}