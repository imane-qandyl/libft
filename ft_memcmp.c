#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;
    char *ss1 = (unsigned char *)s1;
    char *ss2 = (unsigned char *)s2;

    while (i < n && ss1[i] == ss2[i])
    {
        i++;
    }
    if (i == n) 
    {
        return 0; // Both strings are equal up to n bytes
    } 
    else 
    {
        return ss1[i] - ss2[i];//to ensure proper handling of signedness and avoid potential issues with negative values.
    }
}

int main()
{
    const char *s = "bpbc";
    const char *b = "abcd";
    printf("%d\n",ft_memcmp(s,b,100));
     printf("%d",memcmp(s,b,100));
}
//if it null terminator was encountered, 
//continue comparing bytes because it's memcmp not strncmp