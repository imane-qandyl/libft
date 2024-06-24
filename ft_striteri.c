#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i, &s[i]); // s + i
        i++;
    }
}

// void ft_index(unsigned int s, char *c)
// {
//     printf("%c %d\n", *c, s);
// }

// int main() {
//     char s[6] = "hello";
//     ft_striteri(s, ft_index);
// }