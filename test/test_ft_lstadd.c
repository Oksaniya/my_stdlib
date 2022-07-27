#include "../header/test.h"
#include <stdio.h>

void test_ft_lstadd(void)
{
    printf("\nLSTADD\n\n");

    t_list *alst;
    t_list *new;
    t_list *buf;
    char str1[] = "Jan spyt'";
    char str2[] = "u lizhku\n";
 
    alst = ft_lstnew((const void *)str1, ft_strlen(str1));
    new = ft_lstnew((const void *)str2, ft_strlen(str2));

    ft_lstadd(&alst, new);

    buf = alst;
    // while (buf)
    // {
    //     printf("content = %s\n", alst->content);
    //     *alst = *alst->next;
    // }

    for (int i = 0; i < 2; i++)
    {
        printf("content of each list = %s\n",buf->content);
        buf = buf->next;
    }
}