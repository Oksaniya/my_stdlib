#include "../header/test.h"

void test_print_mem(void)
{
    unsigned char chlen[10] = {1,2,3,4,5,6,7,8,9,10};

    print_mem((void *)chlen, 10);

    printf("\n\n\ntest_print_mem\n");
}