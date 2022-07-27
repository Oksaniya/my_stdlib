#include "../header/test.h"

void test_ft_strclr(void)
{
    char s[] = "Wohhoho!";
    
    print_mem((void *)s, 9);

    ft_strclr(s);

    print_mem((void *)s, 9);
}