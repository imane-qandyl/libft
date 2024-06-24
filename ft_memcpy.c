#include "libft.h"

void *ft_memcpy(void *dest, const void *src,size_t n)
{
    unsigned char *destination;
    const unsigned char *source;
    destination = (unsigned char *)dest;
    source = (const unsigned char *)src;
    size_t i;
    i = 0;
    if (src == NULL && dest == NULL)
    return NULL;
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (dest);
     
}
// int main()
// {
    // dest = hijklmnopqrstuvwxyz
    // result = abcdefgabcdefuvwxyz
//     char src[50]= "abcdefghijklmnopqrstuvwxyz";
//     printf ("%s", memcpy(src + 5,NULL,13));
// }