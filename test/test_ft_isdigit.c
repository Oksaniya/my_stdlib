#include "../header/test.h"
#include <stdlib.h>
#include <ctype.h>

void test_ft_isdigit (void)
{
    char n = '9';
    int dest;
    int dest1;

    printf("\nMy my_isdigit\n\n");

    dest = ft_isdigit(n);
    printf("my_isdigit = %i\n", dest);
    dest1 = isdigit(n);
    printf("isdigit = %i\n", dest1);
}