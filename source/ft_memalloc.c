#include "../header/my_stdlib.h"

void * ft_memalloc(size_t size)
{
    unsigned char *memory;

    memory = (unsigned char *)malloc(size);

    if (memory == NULL)
    {
        return NULL;
    }

    ft_bzero((void *)memory, size);
    return (void *)memory;
}