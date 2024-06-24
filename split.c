#include "libft.h"

int ft_count(const char *str,char c)
{
    int i;
    int count;
    count = 0;
    i = 0;
    if(str == NULL)
    {
        return(0);
    }
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if(str[i] != c && str[i])
            count++;
        while (str[i] != c  && str[i]) // is to advance the index i until the next occurrence of the character c
            i++;
    }
    return(count);
}

static char	*ft_strcpy(char *s, char c)
{
  	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, i);
	return (str);
}
// char **ft_split(char const *s, char c)
// {

// }
int main()
{
    char *c = ",";
    printf("%d",ft_count(c,','));
}


// 0 and \0 and NULL are all the same, one as a digit, the other as a character, the other as a string.