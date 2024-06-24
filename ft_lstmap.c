#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{    
	t_list	*new;
	t_list	*node;

    if (!lst || !f)
        return NULL;
    	new = NULL;
	while (lst)
	{
		
		node = malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		node ->content = f(lst->content);
		node -> next = NULL;
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);

}
// void *add_one(void *content) {
//     int *num = (int *)content;
//     int *result = malloc(sizeof(int));
//     if (result) {
//         *result = (*num) + 1;
//     }
//     return result;
// }
// void delete_int(void *content) {
//     free(content);
// }
// int main()
// {
//     // Create a linked list with integers 1, 2, and 3
//     t_list *head = ft_lstnew((void *)malloc(sizeof(int)));
//     *(int *)(head->content) = 1;                

//     ft_lstadd_back(&head, ft_lstnew((void *)malloc(sizeof(int))));
//     *(int *)(head->next->content) = 2;

//     // Apply ft_lstmap to add 1 to each integer
//     t_list *new_list = ft_lstmap(head, &add_one, &delete_int);
//     while (new_list) {
//         printf("%d ", *(int *)(new_list->content));
//         new_list = new_list->next;
//     }
//     return (0);
    
// }
// //void * :can accept any type of pointer.
// // If new_list is NULL, meaning this is the first node being added, 
// // *(int *) is a type cast and dereference operation 
// //*: This is the dereference operator. It's used to access the value stored at the memory location pointed to by a pointer.