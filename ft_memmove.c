#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			dest[len] = source[len];
	return (dst);
}
int main()
{
    // dest = hijklmnopqrstuvwxyz
    // result = abcdefghijklmuvwxyz
    char src[50]= "abcdefghijklmnopqrstuvwxyz";
    printf ("%s",ft_memmove(src + 7,src,13));

}