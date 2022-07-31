#include "../header/my_stdlib.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, (void *)&c, 1);
}