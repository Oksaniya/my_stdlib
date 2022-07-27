#include "../header/my_stdlib.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    const void *output;
    size_t len;

    output = (const void *)ft_itoa(n);

    len = ft_strlen(output);
    
    write(fd, output, len);
}