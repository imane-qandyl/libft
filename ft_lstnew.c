#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if(!new_node)
    {
        return NULL;
    }
    (*new_node).content = content;
    (*new_node).next = NULL;//Set the next pointer to NULL

    return new_node;

}
// int main()
// {
//     char *content = "imane student 42";
//     t_list *node = ft_lstnew(content);
//     printf("Content of the node: %s\n", (char *)(*node).content);
// }