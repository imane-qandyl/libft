#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_mem(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

static char	*ft_strcpy(char const *s, char c)
{ // s = "h,e,l,l,o";, c = ','
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = ft_calloc(i + 1, sizeof(char)); // + 1 for the null terminator (because it's ft_calloc)
	if (!str)
		return (NULL);
	ft_memcpy(str, s, i);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**split;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1)); // malloc() returns a void * pointer, but split is of type char **. The types don't match. 
	if (!split)
		return (NULL);
	i = 0;
	while (i < count) //being NULL, which indicates the end of the array.
	{
		while (*s == c) // skip delimiters in the beginning of the word
			s++;
		split[i] = ft_strcpy(s, c);
		if (!split[i])
		{
			free_mem(split, i - 1); // since split is an array of strings we have to free the previous strings if one of them failed
			// free(split);
			return (NULL);
		}
			
		while (*s && *s != c)
			s++;
		i++;
	}
	split[i] = NULL;
	return (split);
}

 // 0 as a digit = 0, as a character = null terminator, as a string = NULL;

// int main(void)
// {
// 	// int i = 0;
// 	// char *s = "h,e,l,l,o";
// 	// char c = ',';
// 	// char **result = ft_split(s, c);
// 	// while (result[i])
// 	// 	printf("%s\n", result[i++]);
// 		char *string = "      split       this for   me  !       ";
//         char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
//         char **result = ft_split(string, ' ');
// }
// // 0 and \0 and NULL are all the same, one as a digit, the other as a character, the other as a string.
//In C programming, array indexing starts from 0. Therefore, if you have an array split of size count, valid indices for this array are from 0 to count - 1.