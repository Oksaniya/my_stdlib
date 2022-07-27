#include "../header/test.h"

void test_ft_strrchr (void)
{
    const char s[13] = "Hello world!";
    char *res;

    printf("C = o\n%s\n", ft_strrchr(s, 'o'));

    res = ft_strrchr(s, '\0');
    if (*res == '\0')
    {
        printf("C = \\0\n");
    }
    
    res = ft_strrchr(s, 'a');
    if (res == NULL)
    {
        printf("We have found NULL\n");
    }
}