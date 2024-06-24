#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
     if (!lst || !new)
		return ;
     t_list *last;
     last = ft_lstlast(*lst);
    if (last)
            (*last).next = new; //next pointer of the last node 
    else 
        *lst = new;// update the head pointer to point to the new node because it's the only node.
}
/*   4
4
*/
// dereference means first character



// int main()
// {
//     t_list *head = NULL;

//     // Create nodes with content
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     node1->content = "Node 1";
//     node1->next = NULL;

//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     node2->content = "Node 2";
//     node2->next = NULL;

//     t_list *node3 = (t_list *)malloc(sizeof(t_list));
//     node3->content = "Node 3";
//     node3->next = NULL;

//     // Add nodes to the list
//     ft_lstadd_back(&head, node1);
//     ft_lstadd_back(&head, node2);
//     ft_lstadd_back(&head, node3);

//     printf("Content of the last node: %s\n", (char *)(*head).content);
// }

//Each node is linked to the next one, 




// head is the first node of a linked list, and a tail is the last node.