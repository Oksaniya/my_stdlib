#include "../header/test.h"
#include <fcntl.h>

void test_ft_putendl_fd(void)
{
    printf("\nTEST ft_putendl_fd\n");
    
    int fd;
    const char c[] = "Hello World!";
    mode_t mode;

    mode = S_IRWXU|S_IRGRP|S_IROTH;
    fd = open("./Ft_putendl_fd.txt", O_CREAT|O_RDWR, mode);

    ft_putendl_fd(c, fd);
    close(fd);
    printf("\n");
}