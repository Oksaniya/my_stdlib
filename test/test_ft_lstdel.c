#include "../header/test.h"
#include <stdio.h>

static void del(void *s, size_t n);

#define NUMBER_OF_LISTS 3

void test_ft_lstdel(void)
{
    t_list *l;
    t_list *buf;
    char str[] = "Jan w sadochku";
 
    l = ft_lstnew((const void *)str, ft_strlen(str));
    buf = l;

    printf("\nLSTDEL\n\n");

    for (int i = 0; i < NUMBER_OF_LISTS; i++)
    {
        buf->next = ft_lstnew((const void *)str, ft_strlen(str));
        buf = buf->next;
    }

    buf = l;
    for (int i = 0; i < NUMBER_OF_LISTS; i++)
    {
        printf("content of each list = %s\n",buf->content);
        buf = buf->next;
    }

    ft_lstdel(&l, &del);

    if (l == NULL)
    {
        printf("SUCCESS\n");
    }

}

static void del(void *s, size_t n)
{
    ft_bzero(s, n);
    free(s);
}