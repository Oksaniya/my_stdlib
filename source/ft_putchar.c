#include "../header/my_stdlib.h"
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}