#include "libft.h"
#include <fcntl.h>
void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s,fd);
    ft_putchar_fd('\n',fd);
}
int main()
{
    char *s= "ianfdasfn";
    int fd = open("123.txt",O_WRONLY);
    ft_putendl_fd(s,fd);
}