#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return(NULL);
    size_t i;
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return((char *)&s[i]);// or return((char *)s + i)
        i++;
    }
    if ((char)c == '\0')
        return((char *)&s[i]);
    else
        return(NULL);
}
// int main()
// {
//     // char *s = NULL;
//     char str[] = "hadise8awerh8ghauerjhgui9erj89guaergj";
//     char *s;
//     s = str;
//     printf("%p\n",ft_strchr(s,1024));
//     // printf("%p\n",strchr(s,1024));
//     // printf("%s",strchr(s,'d'));
// }
// if %p it return the memory address where the character 'd' is found 