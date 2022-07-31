#include "../header/test.h"

static void local_toupper(unsigned int u, char *s);

void test_ft_striteri(void)
{
    printf("\nSTRITERI\n\n");
    
    char n[] = "hhjfhvbtj";

    ft_striteri(n, &local_toupper);
    
    printf("n = %s\n", n);
}

static void local_toupper(unsigned int u, char *s)
{
    *s = (*s - 32) + u;
    return ;
}
