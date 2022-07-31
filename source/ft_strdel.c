#include "../header/my_stdlib.h"

void ft_strdel(char **as)
{
    free(*as);
    *as = NULL;
}