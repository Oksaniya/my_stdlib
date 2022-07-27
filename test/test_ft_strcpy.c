#include "../header/test.h"

void test_ft_strcpy(void)
{
    const char src[13] = "Hello Vladik";
    char *dest;
    dest = (char *)malloc(13);

    dest = ft_strcpy(dest, src);
    printf("\nTEST STRCPY\ndest=%s\n", dest);
}