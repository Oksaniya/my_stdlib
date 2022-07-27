#include "../header/test.h"
#include <stdlib.h>
#include <ctype.h>

void test_ft_isascii(void)
{
    char n = 'y';
    int dest;
    int dest1;

    printf("\nMy my_isascii\n\n");

    dest = ft_isascii(n);
    printf("my_isascii = %i\n", dest);
    dest1 = isascii(n);
    printf("isascii = %i\n", dest1);
}