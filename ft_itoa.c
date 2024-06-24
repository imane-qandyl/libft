#include "libft.h"

static size_t   ft_intlen(int nb)
{
    int i;
    i = 0;
    if (nb == 0)
        return 1; 
    if (nb < 0)
    {
        nb *= -1;
        i++;
    }
    while(nb)
    {
        nb = nb / 10;
        i++;
    }
    return (i);
}

// int main(void)
// {
//     printf("%d", ft_intlen(-123));
// }

char *ft_itoa(int n)
{
    char *str;
    size_t length;
    if (n == -2147483648)
		return (ft_strdup("-2147483648"));
    length = ft_intlen(n);
    str = (char *)malloc(length + 1);
    if (!str)
        return NULL;
    str[length] = '\0';
    if (n == 0)
    {
         str[0] = '0';
        return str;
    }
       
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    while(n)
    {
        --length;
        str[length] = (n  % 10) + 48;
        n /= 10;
    }
    return(str);
}
// int main ()
// {
//     printf("%s",ft_itoa(-2147483648));
// }
//memory allocation means creat new string  2147483648

//           -2147483648             integer             2147483647 