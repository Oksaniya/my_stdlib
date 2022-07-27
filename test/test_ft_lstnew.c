#include "../header/test.h"
#include <stdio.h>

void test_ft_lstnew(void)
{
    printf("\ntest_ft_lstnew\n");
    t_list *my_list;
    char s[] = "Vladik, ne shmorhay\n";

    my_list = ft_lstnew((void const *)s, ft_strlen(s));

    printf("\ncontent = %s\n",(char *)my_list->content);    

    printf("\ntest_ft_lstnew_2\n");

    my_list = ft_lstnew(NULL, 5);

    if (my_list->content == NULL)
    {
        printf("\nNULL\n");
    }
    printf("\ncontent_size = %zu\n", my_list->content_size);    
}