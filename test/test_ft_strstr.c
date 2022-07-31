#include "../header/test.h"

void test_ft_strstr(void)
{
    printf("\nTEST STR_STR\n");

    const char haystack[27] = "frHello Worl!dHello World!";
    const char needle[13] = "Hello World!";
    char *res;

    res = ft_strstr(haystack, needle);
    printf("res:\n%s\n", res);

    const char haystack1[16] = "frHello Worhd!b";
    const char needle1[13] = "Hello world!";

    res = ft_strstr(haystack1, needle1);
    if (res == NULL)
    {
        printf("\nNULL\n");
    }

    const char haystack2[26] = "frHello Worl!dHello World";
    const char needle2[13] = "Hello world!";

    res = ft_strstr(haystack2, needle2);
    if (res == NULL)
    {
        printf("\nNULL2\n");
    }
}