#include "../header/test.h"
#include <stdlib.h>
#include <ctype.h>

void test_ft_isalpha (void)
{
    char n = 32;
    int dest;
    int dest1;

    printf("\nMy ISALPHA\n\n");

    dest = ft_isalpha(n);
    printf("MY_isalpha = %i\n", dest);
    dest1 = isalpha(n);
    printf("isalpha = %i\n", dest1);


}