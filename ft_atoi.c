#include "libft.h"

int	ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;
    sign = 1;
    i = 0;
    res = 0;
    while (str[i] == 32 || str[i] >=9 && str[i] <= 13 )
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++; 
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        if (res / 10 >= LONG_MAX && sign == -1)
            return(0);
        if (res / 10 >= LONG_MAX)
            return(-1);
        i++;
    }
    return (res * sign);

}

int main(void)
{
    printf("%d\n", ft_atoi("     -1234"));
    // printf("%d", atoi("--1"));
}