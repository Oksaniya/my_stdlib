#include "../header/my_stdlib.h"

void ft_putstr_fd(char const *s, int fd)
{
    size_t len;

    len = ft_strlen(s);
    
    write(fd, (void *)s, len);
}