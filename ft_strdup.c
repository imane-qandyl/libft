#include "libft.h"

char *ft_strdup(const char *s)
{
    char *array;
    int i ;
    i = 0;
	array = malloc(ft_strlen(s) + 1);
    if(!array)
        return NULL;
    while (s[i])
    {
        array[i] = s[i];
        i++;
    }
    array[i] = '\0';
    return(array);
}
// int main ()
// {
//     char c[] = "imane";
//     printf("%s",ft_strdup(c));
// }
