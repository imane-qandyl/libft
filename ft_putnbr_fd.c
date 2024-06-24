#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;

	 if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return;
    }

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n *= -1;
    }
    
    if (n == 0)
    {
        ft_putchar_fd('0', fd);
        return;
    }

    if (n > 9)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putnbr_fd((n % 10), fd);
    }
    else 
    {
        c = n + '0';
        ft_putchar_fd(c, fd);
    }
}
int main()
{
    long long n = 2147483650;//In C, this value overflows and wraps around to become -2147483648.
    int fd = open ("123.txt" , O_WRONLY | O_CREAT);
    ft_putnbr_fd(n, 1);
    return 0; 
    //exceed the max or min cause wrap-around
    //Decrement n by 1, causing underflow
    //increment n by 1, causing overflow
}
//ft_putnbr_fd(123, fd) --> ft_putnbr_fd(12, fd) --> ft_putnbr_fd(1, fd)
//This process continues from last until the initial caller 