#include "../header/test.h"

size_t test_ft_strlen (void)
{
    char chlen1[] = "Hello world!";
    size_t i;

    i = ft_strlen((const char *)chlen1);
    printf("test strlen\n");
    printf("i = %zu\n", i);
    return i;
}