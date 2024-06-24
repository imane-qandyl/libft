#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}
// int main()
// {
//     // char *c= "imane";
//     // printf("%d\n", ft_strlen(null));// if null  It might cause a segmentation fault
//     char *hadra = "imane";
//     printf("%p\n", hadra + 1);
//     printf("%p\n", &hadra[1]);
//     printf("%c\n", *(hadra + 1));
//     printf("%c\n", hadra[1]);
//     int n = 5;
//     int *ptr = &n;
//     printf("%d\n",  *ptr); //5 * means dereference, i,e show me whats inside that memory address
//     printf("%p",  ptr);// memory adresse cuz he hol the adress of the 5

// }