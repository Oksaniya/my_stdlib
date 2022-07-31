#include "../header/test.h"
#include <stdlib.h>
#include <ctype.h>

void test_ft_tolower(void)
{
    char n = 'T';
    int dest;
    int dest1;

    printf("\nMy tolower\n\n");

    dest = ft_tolower(n);
    printf("ft_tolower = %i\n", dest);
    dest1 = tolower(n);
    printf("tolower = %i\n", dest1);
}