#include "../header/test.h"

void test_ft_strchr (void)
{
    const char s[13] = "Hello world!";
    char *res;

    printf("C = o\n%s\n", ft_strchr(s, 'o'));

    res = ft_strchr(s, '\0');
    if (*res == '\0')
    {
        printf("C = \\0\n");
    }
    
    res = ft_strchr(s, 'a');
    if (res == NULL)
    {
        printf("We have found NULL\n");
    }
}