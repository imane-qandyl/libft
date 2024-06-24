#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count ;
    count = 0;
    while(lst) //  if we do lst.next it will give the size minus 1 because we point to the next straight away.
    {
        count++;
        lst = (*lst).next; // Move to the next node
    }
    return (count);
}

/*
1
2
3
4
NULL
*/
// int main()
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

//     while (head != NULL)
//     {
//         printf("Content of the node: %s\n", (char *)head->content);
//         head = head->next;
//     }
//     return 0;
// }