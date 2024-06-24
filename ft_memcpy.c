#include "libft.h"

void *ft_memcpy(void *dest, const void *src,size_t n)
{
    unsigned char *destination;
    unsigned const char *source;
    destination = (unsigned char *)dest;
    source = (unsigned char *)src;
    size_t i;
    i = 0;
    while (i < n)
    {
    destination[i] = source[i];
    i++;
    }
    return (destination);
     
}
// int main()
// {
//     // dest = hijklmnopqrstuvwxyz
//     // result = abcdefgabcdefuvwxyz
//     char src[50]= "abcdefghijklmnopqrstuvwxyz";
//     printf ("%s",ft_memcpy(src + 7,src,13));
// }