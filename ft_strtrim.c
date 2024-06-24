#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    // allocates memory for an empty string and returns a pointer to it.
	size_t		size_s1;

	if (s1 == NULL || set == NULL)
		return (ft_strdup(""));
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size_s1 = ft_strlen(s1);
	while (ft_strchr(set, s1[size_s1 - 1]) && size_s1 != 0)
		size_s1--;
	return (ft_substr(s1, 0, size_s1));
}
int main()
{
    char *c="1234567890";
    char *set = "123456789";
    printf("%s",ft_strtrim(c,set));
}
// question for size_s1 + 1 and size_s1 - 1 because of the index