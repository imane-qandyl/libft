#include "libft.h"
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lensrc = ft_strlen(src);
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (lensrc);
	while (dst[i] && i < dstsize)
		i++;
	lendst = i;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[i - lendst];
		i++;
		j++;
	}
	if (lendst < dstsize)
		dst[i] = '\0';
	return (lendst + lensrc);
}
int main()
{
    char src[] = "123";
    char dest[0] = "";
    printf("%zu\n", ft_strlcat(dest,src,0));
    // printf("%s\n", dest);
}