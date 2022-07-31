#include "../header/my_stdlib.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    t_list *new;
    t_list *buf;
    t_list *buflst;

    if (lst == NULL || f == NULL)
    {
        return NULL;
    }
    buflst = lst;
    new = f(buflst);
    if (new == NULL)
    {
        return NULL;
    }
    buf = new;
    buflst = buflst->next;
    while (buflst != NULL && buf != NULL)
    {
        buf->next = f(buflst);
        buf = buf->next;
        buflst = buflst->next;
    }
    return new;
}