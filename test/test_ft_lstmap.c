#include "../header/test.h"
#include <stdio.h>

static t_list *f(t_list *elem);
static char local_toupper(char c);

void test_ft_lstmap(void)
{
    printf("\nLSTMAP\n\n");

    t_list *lst;
    char str[] = "Vladik dyvytsia vidosiky, Jan spyt'";
 
    lst = ft_lstnew((const void *)str, ft_strlen(str));

    if (lst == NULL)
    {
        printf("NULL");
    }

    ft_lstmap(lst, &f);

    printf("Content z lista = %s\n", (char *)lst->content);   
}

static t_list *f(t_list *elem)
{
    char *str;
    t_list *new;

    str = ft_strmap((char const *)elem->content, &local_toupper);
    new = ft_lstnew((void const *)str, elem->content_size);
    printf("Content in FRESH list = %s\n", (char *)new->content);
    return new;
}

static char local_toupper(char c)
{
    if (c >= 97 && c <= 122)
    {
        return (c - 32);
    }
    else
    {
        return c;
    }
}