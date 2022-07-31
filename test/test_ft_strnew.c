#include "../header/test.h"

void test_ft_strnew(void)
{
    unsigned char *src;

    printf("\n\n\nTEST STRNEW\n");
    
    src = (unsigned char *) ft_strnew(10);
    src[0] = 'a';
    printf("SRC=%s\n",src);
    print_mem((void *)src, 20);
}