#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if(!lst || !*lst || !del)
        return ;
    while (*lst) {
        // Store the next pointer before deleting the current node
        t_list *next = (*lst)->next;

        // Delete the current node using ft_lstdelone
        ft_lstdelone(*lst, del);

        // Move to the next node
        *lst = next;
    }
    
    *lst = NULL;
}
// void delete_content(void *content) 
// {
//     free(content); // Or any other cleanup operations
// }
// int main ()
// {
//     t_list *head = NULL;
//     t_list *node1 = (t_list *)malloc (sizeof(t_list));
//     (*node1).content = "imane";

//     t_list *node2 = (t_list *)malloc (sizeof(t_list));
//     (*node2).content = "42";

//     ft_lstclear(&head,delete_content);
//     if (head == NULL) 
//         printf("List is empty after clearing\n");
//     return(0);

// }


