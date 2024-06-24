#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
   if (!lst || !new)
		return ;
    (*new).next = *lst;
    *lst = new;     
}
// int main()
// {
//     t_list *head = NULL;
//     char *content = "imane student 42";
//     t_list *new_node = (t_list *)malloc(sizeof(t_list));
//     (*new_node).content = content;
//     ft_lstadd_front(&head, new_node);
//     printf("Content of the node: %s\n", (char *)(*head).content);
// }


//**lst, you're allowing the function 
//to modify the pointer original itself, not just the data it points to.