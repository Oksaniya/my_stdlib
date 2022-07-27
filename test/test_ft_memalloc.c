#include "../header/test.h"

void test_ft_memalloc(void)
{
    unsigned char *chlen;
    printf("\n\n\ntest memalloc\n");
    chlen = (unsigned char *) malloc(100);
    chlen = (unsigned char *) ft_memset((void *)chlen, 1, 90);
    print_mem((void *)chlen, 100);
 
    free(chlen);

    ft_memalloc(100);
       
    print_mem((void *)chlen, 100);
}