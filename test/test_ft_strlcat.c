#include "../header/test.h"

void test_ft_strlcat(void)
{
    char src[13] = "Hello World!";
    char *dest;
    size_t res;
    
    dest = (char *)malloc(40);

    dest = ft_strcpy(dest, "ohohox");

    res = ft_strlcat(dest, (const char *)src, 90);
    printf("\nRES SIZE_T 90\n%zu\n", res);

    res = ft_strlcat(dest, (const char *)src, 9);
    printf("\nRES SIZE_T 9\n%zu\n", res);

    res = ft_strlcat(dest, (const char *)src, 3);
    printf("\nRES SIZE_T 3\n%zu\n", res);

    res = ft_strlcat(dest, (const char *)src, 0);
    printf("\nRES SIZE_T 0\n%zu\n", res);
}