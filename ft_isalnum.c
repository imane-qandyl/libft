#include "libft.h"

int ft_isalnum(int c)
{
    return(ft_isalpha(c) || ft_isdigit(c));
}
// int main()
// {
//     printf("%d\n",ft_isalnum('W'));
//     printf("%d",isalnum('w'));
// }
    // if ((c >= 48 && c <= 57 )||(c >= 97 && \
    // c <= 122 || c >= 65 && c <= 90))
    //     return (1);
    // return (0);