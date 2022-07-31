#include "../header/test.h"

void test_ft_strncat(void)
{
    char src[13] = "Hello World!";
    char *dest;
    
    dest = (char *)malloc(40);

    dest = ft_strcpy(dest, "ohoho");

    printf("\nTEST STRNCAT\nDEST BEFORE NCAT\n%s\n", dest);

    dest = ft_strncat(dest, (const char *)src, 90);

    printf("\nDEST AFTER NCAT\n%s\n", dest);
}