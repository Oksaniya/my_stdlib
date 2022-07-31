#include "../header/my_stdlib.h"
#include <unistd.h>

void ft_putendl_fd(char const *s, int fd)
{
    size_t len;

    len = ft_strlen(s);
    
    write(fd, s, len);
    write(fd, (const void *)'\n', 1);
}