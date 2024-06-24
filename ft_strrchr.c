#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((const char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i); //Vérifie si le caractère à la position i est égal c.retourne un pointeur vers cette position de caractères.
		}
		i--;
	}
	if (c == '\0')
        return((char *)s + i);
	return (NULL);
}
// int main()
// {
//     char str[] = "hadise8awerh8ghauerjhdgui9erj89guaergj";
//     printf("%s",ft_strrchr(str,'d'));
// }