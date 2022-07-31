#include "../header/test.h"

void test_ft_strjoin (void)
{
    const char s1[] = "Hello world!";
    const char s2[] = "bla";
    char *res;

    printf("\n\n\nTEST STRJOIN\n");

    res = ft_strjoin(s1, s2);
    printf("res1=%s\n", res);
}