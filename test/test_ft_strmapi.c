#include "../header/test.h"

static char local_toupper_2(unsigned int u, char s);

void test_ft_strmapi(void)
{
    char *res;

    printf("\nSTRMAPI\n\n");
    
    char n[] = "hhjfhvbtj";

    res = ft_strmapi(n, &local_toupper_2);

    printf("res = %s\n", res);
}

static char local_toupper_2(unsigned int u, char s)
{
    s = (s - 32) + u;
    return s;
}