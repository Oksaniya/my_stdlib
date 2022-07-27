#include "../header/test.h"
#include <stdio.h>

static void f(t_list *s);

void test_ft_lstiter(void)
{
    printf("\nLSTITER\n\n");

    t_list *lst;
    char str[] = "treba jty po Jana";
 
    lst = ft_lstnew((const void *)str, ft_strlen(str));

    if (lst == NULL)
    {
        printf("NULL");
    }

    ft_lstiter(lst, &f);

    printf("Content z lista = %s\n", (char *)lst->content);   
}

static void f(t_list *s)
{
    printf("Content = %s\n", (char *)s->content);
}

