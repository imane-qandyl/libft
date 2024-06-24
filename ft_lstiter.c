#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while(lst)
    {
        f(lst->content);
        lst = (*lst).next;
    }
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

//     ft_lstiter(head,delete_content);
//     if (head == NULL) 
//         printf("List is empty after clearing\n");
//     return(0);

// }


