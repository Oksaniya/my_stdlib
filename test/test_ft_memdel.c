#include "../header/test.h"

void test_ft_memdel(void)
{
    unsigned char *src;

    printf("\n\n\nTEST MEMDEL\n");

    src = malloc(30);
    src = (unsigned char *)ft_memset((void *)src, 1, 20);
    print_mem((void *)src, 20);
    
    ft_memdel((void **)&src);
    if (src == NULL)
    {
        printf("SUCCESS\n");
    }
}