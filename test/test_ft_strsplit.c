#include "../header/test.h"

void test_ft_strsplit(void)
{    
    int i;

    i = 0;
    
    printf("\nTEST ft_strsplit\n\n");

    const char s1[27] = "Hello Worl!d Hello World!";
    char **res;

    res = ft_strsplit(s1, ' ');
    
    if (res == NULL)
    {
        printf("NULL");
    }

    while (res[i] != 0)
    {
        printf("res=%s\n", res[i]);
        i++;
    }
}