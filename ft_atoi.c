#include "libft.h"

int	ft_atoi(const char *str)
{
    // 9223372036854775807
    // 2147483647
    int i;
    int res;
    int sign;
    sign = 1;
    i = 0;
    res = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++; 
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + str[i] - '0';
        if (res / 10 >= 2147483647 && sign == -1)
            return(0);
        if (res / 10 >= 2147483647)
            return(-1);
        i++;
    }
    return (sign * res);

}

// int main(void)
// {
//     // printf("%d\n", ft_atoi("     -1234"));
//     // printf("%d", atoi("--1"));
//      printf("%d\n",atoi("\t\n\r\v\f  469 \n"));
//     printf("%d\n",ft_atoi("\t\n\r\v\f  469 \n"));//469
//      printf("%d\n",atoi("\n\n\n  -46\b9 \n5d6"));
//     printf("%d\n",ft_atoi("\n\n\n  -46\b9 \n5d6"));//-46

// }