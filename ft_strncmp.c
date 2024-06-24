#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    if (i == n) 
    {
        return 0; // Both strings are equal up to n bytes
    } 
    else 
    {
        return (unsigned char)s1[i] - (unsigned char)s2[i];//to ensure proper handling of signedness and avoid potential issues with negative values.
    }
}
// int main ()
// {
//     // const char *s = "\0abc";
//     // const char *b = "\0bcd";
//     // printf("%d\n",ft_strncmp(s,b,4));
//     //  printf("%d",strncmp(s,b,4));
// }
//In this case, at the first position of difference (s[0] = 'i', b[0] = 's'), the ASCII value of 'i' is 105 
//and the ASCII value of 's' is 115. Therefore, 105 - 115 = -10