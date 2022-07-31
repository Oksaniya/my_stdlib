#include "../header/test.h"

void test_ft_putstr(void)
{
    printf("\ntest_ft_putstr\n");
    
    const char s[] = "Hello World!";

    ft_putstr(s);

    printf("\n");
}