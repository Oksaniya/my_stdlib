#include "../header/my_stdlib.h"

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= 48 && c <= 57))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}