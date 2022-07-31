#include "../header/test.h"
#include <fcntl.h>

void test_ft_putchar_fd(void)
{
    printf("\nTEST PUTCHAR_FD\n");
    
    int fd;
    char c;
    mode_t mode;

    mode = S_IRWXU|S_IRGRP|S_IROTH;
    fd = open("./Onlya.txt", O_CREAT|O_RDWR, mode);
    c = 'a';

    ft_putchar_fd(c, fd);
    close(fd);
    printf("\n");
}