#include "../header/test.h"

static void local_toupper(char *s);

void test_ft_striter(void)
{
    printf("\nSTRITER\n\n");
    
    char n[] = "hhjfhvbtj";

    ft_striter(n, &local_toupper);
    
    printf("n = %s\n", n);
}

static void local_toupper(char *s)
{
    *s = *s - 32;
    return ;
}