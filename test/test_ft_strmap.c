#include "../header/test.h"

static char local_toupper_1(char s);

void test_ft_strmap(void)
{
    char *res;

    printf("\nSTRMAP\n\n");
    
    char n[] = "hhjfhvbtj";

    res = ft_strmap(n, &local_toupper_1);

    printf("res = %s\n", res);
}

static char local_toupper_1(char s)
{
    s = s - 32;
    return s;
}
