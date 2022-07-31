#include "../header/test.h"

void test_ft_memccpy(void)
{
    unsigned char chlen[10] = {5,5,5,5,5,5,5,8,5,5};
    unsigned char *chlen2;
    chlen2 = (unsigned char *) malloc(10);
    ft_bzero((void *) chlen2, 10);
    printf("\n\n\ntest memccpy\n");

    print_mem((void*)chlen2, 10);
    chlen2 = (unsigned char*) ft_memccpy((void *)chlen2, (const void *)chlen, 8, 10);
    print_mem((void*)chlen2, 10);
}