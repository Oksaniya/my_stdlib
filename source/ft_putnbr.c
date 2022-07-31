#include "../header/my_stdlib.h"
#include <unistd.h>

void ft_putnbr(int n)
{
    const void *output;
    size_t len;

    output = (const void *)ft_itoa(n);

    len = ft_strlen(output);
    
    write(1, output, len);
}