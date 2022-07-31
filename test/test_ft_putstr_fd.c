#include "../header/test.h"
#include <fcntl.h>

void test_ft_putstr_fd(void)
{
    printf("\nTEST PUTSTR_FD\n");
    
    int fd;
    const char c[] = "Hello World!";
    mode_t mode;

    mode = S_IRWXU|S_IRGRP|S_IROTH;
    fd = open("./Putstr_FD.txt", O_CREAT|O_RDWR, mode);

    ft_putstr_fd(c, fd);
    close(fd);
    printf("\n");
}