#include "../header/my_stdlib.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list *my_list;

    my_list = (t_list *)malloc(sizeof(t_list));

    if (my_list != NULL)
    {
        if (content == NULL)
        {
            my_list->content = NULL;
            my_list->content_size = 0;
        }
        else
        {
            my_list->content = malloc(content_size);
            if (my_list->content != NULL)
            {
                my_list->content = ft_memcpy(my_list->content, content, content_size);
                my_list->content_size = content_size;
            }
        }
        my_list->next = NULL;
    }
    return my_list;
}