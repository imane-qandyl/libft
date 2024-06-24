#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s,0,n);
}
// int main()
// {
//     char buffer[5] = "imane";
//     ft_bzero(buffer, 5);
//     printf("%d",buffer);//it should %p to print memprry adresse.

// //This address may vary each time you run the program and is specific to your system's memory layout. 
// }
//will print an empty string, as the ft_bzero() 
//function fills the buffer with null characters, effectively clearing it.