#include "../header/test.h"

void test_ft_itoa(void)
{
    char *res;
    res = malloc(10);

    printf("\n\n\nTEST ft_itoa\n");

    res = ft_itoa(-32);
    printf("\nres = %s\n", res);
    
    if (res == NULL)
    {
        printf("NULL\n");
    }
}