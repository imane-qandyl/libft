#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *array;
    size_t	i;
	size_t	str_len;
    i = 0;
    if(!s)
        return NULL;
    str_len = ft_strlen(s);
	if (start > str_len)
		len = 0;//will be empty, indicating that there are no characters to extract
    if (len > str_len - start)
	{
		len = str_len - start;// sets the length of the substring to the remaining length of the string if len exceeds it
	}
    array = (char *)malloc(len + 1);
    if (!array)
        return NULL;
    while(start < str_len && i < len)
    {
        array[i] = s[start];
        start++;
        i++;
    }
    array[i] = '\0';
    return (array);
}
// int main()
// {
//     char s[] = "imane42";
//     printf("%s",ft_substr(s,2,100000));
// }
// For example, if the input string is
// "hello" and start is 2, then str_len - start would be 3 ("llo").