#include "../header/my_stdlib.h"

void ft_lstadd(t_list **alst, t_list *new)
{
    if (*alst != NULL && new != NULL)
    {
        new->next = *alst;
        *alst = new;
    }
}