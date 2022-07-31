#include "../header/test.h"

char *test_ft_strdup(void)
{
    char src[] = {32,33,34,35,36,37,38,39,40,0};
    char *dest;

    printf("\nTEST STRDUP src \nsrc=%s\n", src);

    dest = malloc(100);

    dest = ft_strdup((const char *)src);
    printf("\nTEST STRDUP dest \ndest=%s\n", dest);
    return dest;
}