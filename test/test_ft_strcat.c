#include "../header/test.h"

void test_ft_strcat(void)
{
    char src[13] = "Hello World!";
    char *dest;
    
    dest = (char *)malloc(30);

    dest = ft_strcpy(dest, "Hellowynka");

    printf("\nTEST STRCAT\nDEST BEFORE CAT\n%s\n", dest);

    dest = ft_strcat(dest, (const char *)src);

    printf("\nDEST AFTER CAT\n%s\n", dest);
}