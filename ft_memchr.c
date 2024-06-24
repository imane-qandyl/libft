#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    const unsigned char *src = s;
    unsigned char car = c;
    
    while (i < n)
    {
        if (src[i] == car)
        {
            return (void *)(src + i);// or &src[i] which would point to the position where the character was found.
        }
        i++;
    }
    return NULL;
}
int main()
{
    const char s[] = "imane";
    char c = 'a';
    printf("%s", ft_memchr(s,c,2));
}
//function should return
// a pointer to the position where the character was found