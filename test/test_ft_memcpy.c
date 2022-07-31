#include "../header/test.h"

void test_ft_memcpy(void)
{
    unsigned char chlen[10] = {8,6,7,5,4,3,6,5,7,8};
    unsigned char *chlen2;
    chlen2 = (unsigned char *) malloc(10);
    ft_bzero((void *) chlen2, 10);
    printf("\n\n\ntest memcpy\n");

    print_mem((void*)chlen2, 10);
    chlen2 = (unsigned char*) ft_memcpy((void *)chlen2, (const void *)chlen, 10);
    print_mem((void*)chlen2, 10);
}