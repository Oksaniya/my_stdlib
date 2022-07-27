#include "../header/my_stdlib.h"

void ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}