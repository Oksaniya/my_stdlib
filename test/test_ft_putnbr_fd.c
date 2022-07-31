#include "../header/test.h"
#include <fcntl.h>

void test_ft_putnbr_fd(void)
{
    printf("\nTEST ft_putnbr_fd\n");
    
    int fd;
    int c;
    mode_t mode;

    c = 12345678;
    mode = S_IRWXU|S_IRGRP|S_IROTH;
    fd = open("./ft_putnbr_fd.txt", O_CREAT|O_RDWR, mode);

    ft_putnbr_fd(c, fd);
    close(fd);
    printf("\n");
}