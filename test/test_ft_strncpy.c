#include "../header/test.h"

void test_ft_strncpy(void)
{
    const char src1[13] = "Hello Vladik";
    char *dest1;
    dest1 = (char *)malloc(13);

    dest1 = ft_strncpy(dest1, src1, 13);
    printf("\nTEST1 STRNCPY\ndest1=%s\n", dest1);

    const char src2[10] = "Heaakihjk";
    char *dest2;
    dest2 = (char *)malloc(13);

    dest2 = ft_strncpy(dest2, src2, 13);
    printf("\nTEST2 STRNCPY\ndest2=%s\n", dest2);
    print_mem((void *)dest2, 13);

    const char src3[10] = "Heaakihjk";
    char *dest3;
    dest3 = (char *)malloc(13);
    dest3 = (char *)ft_memset((void *)dest3, 1, 13);

    dest3 = ft_strncpy(dest3, src3, 5);
    printf("\nTEST3 STRNCPY\ndest3=");
    print_mem((void *)dest3, 13);
}