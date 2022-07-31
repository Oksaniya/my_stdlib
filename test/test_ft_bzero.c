#include "../header/test.h"

void test_ft_bzero(void)
{
    unsigned char *chlen;
    printf("\n\n\ntest bzero\n");
    chlen = (unsigned char *) malloc(100);
    chlen = (unsigned char *) ft_memset((void *)chlen, 1, 90);
   
    print_mem((void *)chlen, 100);
    ft_bzero((void *) chlen, 50);
       
    print_mem((void *)chlen, 100);
}