#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int len;
    unsigned int i;
    if (s && f)
    {
        i = 0;
        len = ft_strlen(s);
        str = malloc (len + 1);
        if (!str)
            return(NULL);
        while(len > i)
        {
            str[i] = f(i,s[i]);
            i++;
        }
        str[i] = '\0';
        return(str);
    }
    return (0);
}

char ft_touper(unsigned int s, char c)
{
    (void)s;//cuz we are not using s;
   if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}


int main() {
    char s[6] = "hello";
    printf("%s", ft_strmapi(s, ft_touper));
    return 0;
}