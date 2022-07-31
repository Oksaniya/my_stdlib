#include "../header/test.h"
#include <stdlib.h>
#include <ctype.h>

void test_ft_isalnum (void)
{
    char n = '-';
    int dest;
    int dest1;

    printf("\nMy my_isalnum\n\n");

    dest = ft_isalnum(n);
    printf("my_isalnum = %i\n", dest);
    dest1 = isalnum(n);
    printf("isalnum = %i\n", dest1);
}