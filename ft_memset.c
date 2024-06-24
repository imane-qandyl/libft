#include "libft.h"

void *ft_memset(void *b, int c, size_t n)
{
    unsigned char *str;
    size_t i;
    str = b;
    i = 0;
    while(i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (b);
}
// int main() {
//     char buffer[6] = "imane";
//     char value = '2';
//     ft_memset(buffer,"value", sizeof(buffer)-1);
//     printf("Memory block after memset(): %s", buffer);
//     return 0;
// }