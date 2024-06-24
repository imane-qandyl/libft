#include "libft.h"
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    while(s[i])
    {
        write(fd,&s[i],1);
        i++;
    }
}
// int main()
// {
//     char *s = "wpfoawkefpoawekfpoawekfapowefk";
//     int fd = open("13.txt",O_WRONLY);
//     ft_putstr_fd(s, fd);
// }