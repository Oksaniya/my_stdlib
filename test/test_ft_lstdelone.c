#include "../header/test.h"
#include <stdio.h>

static void del(void *s, size_t n);

void test_ft_lstdelone(void)
{
    t_list *l;
    char str[] = "Teper shmorhaju ja";
 
    l = ft_lstnew((const void *)str, ft_strlen(str));

    if (l != NULL)
    {
        printf("Content z lista = %s\n", (char *)l->content);
    }

    ft_lstdelone(&l, &del);

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