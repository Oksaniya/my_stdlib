#include "../header/test.h"
#include <stdio.h>

void test_ft_memmove(void)
{
    unsigned char *srcc;
    unsigned char *destt;
    
    srcc = (unsigned char *) malloc(100);
    for (int i = 0; i < 100; i++)
    {
        srcc[i] = i;
    }

    destt = srcc + 5;

    printf("\n\n\ntest memmove\n");
    printf("srcc = %p\n", srcc);
    
    printf("dest = %p\n", destt);

    print_mem((void*)srcc, 100);
    destt = (unsigned char*) ft_memmove((void *)destt, (const void *)srcc, 10);
    print_mem((void*)srcc, 100);
}