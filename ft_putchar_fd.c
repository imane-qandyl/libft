#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}

// int main()
// {
//     int fd = open("hadra.txt", O_CREAT, O_WRONLY);
//     int fd2 = open("hadra2.txt", O_CREAT, O_WRONLY);
//     printf("fd = %d\n", fd);
//     printf("fd2 = %d", fd2);
// }