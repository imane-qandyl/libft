#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    i = 0;
    if (dstsize == 0)
		return (ft_strlen(src));
    while(i < dstsize - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while(dst[i])
        i++;
    return (i);
}
int main()
{
    char src[] = "hadra";
    char dest[4] = "iman";
    printf("%zu\n", ft_strlcpy(dest,src,4));
    printf("%s\n", dest);
}