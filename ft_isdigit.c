#include "libft.h"
int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return(1);
    return(0);
}

// int main()
// {
//     printf("%d\n", ft_isdigit(48));
//     printf("%d", isdigit(48));
// }