#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;
	size_t	result_len;

	i = 0;
	j = 0;
	result_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(result_len + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
int main()
{
    char s[]= "imane";
    char c[]= "hello";
    printf("%s",ft_strjoin(s,c));
}