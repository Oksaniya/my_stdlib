#include "../header/test.h"
#include <stdlib.h>
#include <ctype.h>

void test_ft_isprint(void)
{
    char n = 'y';
    int dest;
    int dest1;

    printf("\nMy my_isprint\n\n");

    dest = ft_isprint(n);
    printf("my_isprint = %i\n", dest);
    dest1 = isprint(n);
    printf("isprint = %i\n", dest1);
}