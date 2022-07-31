#include "../header/test.h"
#include <stdlib.h>
#include <ctype.h>

void test_ft_toupper(void)
{
    char n = '-';
    int dest;
    int dest1;

    printf("\nMy toupper\n\n");

    dest = ft_toupper(n);
    printf("ft toupper = %i\n", dest);
    dest1 = toupper(n);
    printf("toupper = %i\n", dest1);
}