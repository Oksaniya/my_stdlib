#include "../header/my_stdlib.h"
#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int i;
    //long int buf;
    size_t buf;
    int sign;

    i = 0;
    buf = 0;
    sign = 1;

    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
    {
        i++;
    }
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
        {
            sign = sign * (-1);
        }
        i++;
    }
    while (nptr[i] >= 48 && nptr[i] <=57)
    {
            buf = (buf * 10) + (nptr[i] - 48);
            i++;
            if (buf > 9223372036854775807 && sign > 0)
            {
                //buf = 2147483647;
                //break;
                return (-1);
            }
            else if (buf > 9223372036854775807 && sign < 0)
            {
                // buf = 2147483648;
                // break;
                return (0);
            }    
    }
    // buf = buf * sign;
    // return (int)buf;
    sign = (int)buf * sign;
    return sign;
}