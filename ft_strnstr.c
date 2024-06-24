#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int	i;
    int j;
    j = 0;
	i = 0;
    if (!*needle)
        return((char *)haystack);
	while (haystack[i] && i < len)
	{
        if (needle[j] == haystack[i])
        {
            while (haystack[i + j] == needle[j] && i + j < len)
            {
                if (needle[j + 1] == '\0')
                    return ((char *)haystack + i); //Vérifie si le caractère à la position i est égal c.retourne un pointeur vers cette position de caractères.
                j++;
            }
            j = 0;
        }
		i++;
    }
	return (NULL);
}
int main()
{
    char haystack[] = "imanemana";
    char needle[] = "mana";
    printf("%s",ft_strnstr(haystack,needle,10));
}