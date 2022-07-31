#include "../header/test.h"

void test_ft_strnstr(void)
{
    printf("\nTEST STR_N_STR\n");

    const char haystack[27] = "frHello Worl!dHello World!";
    const char needle[13] = "Hello World!";
    char *res;

    res = ft_strnstr(haystack, needle, 5);
    printf("res:\n%s\n", res);

    const char haystack1[16] = "frHallo Worhd!b";
    const char needle1[13] = "Hello world!";

    res = ft_strnstr(haystack1, needle1, 5);
    if (res == NULL)
    {
        printf("\nNULL\n");
    }

    const char haystack2[37] = "frHello world!dHello World0987654321";
    const char needle2[13] = "Hello world!";

    res = ft_strnstr(haystack2, needle2, 14);
    if (res == NULL)
    {
        printf("\nNULL2\n");
    }
    else
    {
        printf("\nWHEN_N>NEEDLE_res=%s\n", res);
    }
}