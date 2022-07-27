#include "../header/test.h"
#include <stdlib.h>

void test_ft_atoi (void)
{
    const char nptr[] = "    -9223372036854775809hello";
    int dest;
    int dest1;

    printf("\nMy ATOI\n\n");

    dest = ft_atoi(nptr);
    printf("MY_ATOI = %i\n", dest);
    dest1 = atoi(nptr);
    printf("ATOI = %i\n", dest1);


}