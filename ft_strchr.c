#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return((char *)s + i);// or return((char *)&s[i])
        i++;
    }
    if (c == '\0')
        return((char *)s + i);
    return(NULL);
}
// int main()
// {
//     char str[] = "hadise8awerh8ghauerjhgui9erj89guaergj";
//     char *s;
//     s = str;
//     printf("%s",ft_strchr(s,'d'));
// }
// if %p it return the memory address where the character 'd' is found 