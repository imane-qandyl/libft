#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}
// void delete_content(void *content) {
//     free(content); // Or any other cleanup operations
// }
// int main ()
// {
//     t_list *head = NULL;
//     t_list *node1 = (t_list *)malloc (sizeof(t_list));
//     (*node1).content = "imane";

//     t_list *node2 = (t_list *)malloc (sizeof(t_list));
//     (*node2).content = "42";


//     ft_lstdelone(node1,delete_content);
//     printf("node: %s\n", (*node1).content);
//     printf("node: %s\n", (*node2).content);
//     return(0);

// }

//for deallocating any dynamically allocated memory 
// (a generic pointer) 