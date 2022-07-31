#include "../header/test.h"

void test_ft_memset(void)
{
    printf("\n\n\ntest_memset\n");
    unsigned char *chlen;

    chlen = (unsigned char *) malloc(100);
   
    print_mem((void *)chlen, 100);
    chlen = (unsigned char *) ft_memset((void *) chlen, 5, 50);
       
    print_mem((void *)chlen, 100);
}