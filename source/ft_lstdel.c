#include "../header/my_stdlib.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *buf;

    while (*alst != NULL)
    {
        buf = (*alst)->next;
        ft_lstdelone(alst, del);
        *alst = buf;
    }
}