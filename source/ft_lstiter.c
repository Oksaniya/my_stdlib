#include "../header/my_stdlib.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    t_list *new;

    new = lst;

    while (lst != NULL && new != NULL)
    {
        f(new);
        new = new->next;
    }
}