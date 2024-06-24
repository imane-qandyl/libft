#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return NULL;
    while((*lst).next) // if we dont do next it will always point to null so we need to catch last node before it reaches NULL
    {
        lst = (*lst).next;
    }
    return(lst);
}

/*
1
2
3
4
NULL
*/
// int main ()
// {
//     t_list *head = NULL;
//     char *content1 = "ijadof";
//     char *content2 = "ijjsakadof";
//     char *content3 = "ijjsakabjbdof";

//     t_list *node1 = ft_lstnew(content1);
//     t_list *node2 = ft_lstnew(content2);
//     t_list *node3 = ft_lstnew(content3);

//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//      ft_lstadd_front(&head, node3);
//      // Count the number of nodes
//     printf("count of nodes: %d\n", ft_lstsize(head));

//     t_list *last_node = ft_lstlast(head);

//     while (head != NULL)
//     {
//         printf("Content of the node: %s\n", (char *)head->content);
//         head = head->next;
//     }
//     printf("last node: %s\n", (char *)last_node->content);
//     return 0;
//     }