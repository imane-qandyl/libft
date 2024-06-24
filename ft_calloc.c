#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *array;
    array = malloc(count * size);
	if (size && count > 0 && count > INT_MAX / size) //This part checks whether the requested number of elements (count) exceeds the maximum number of elements that can be allocated without causing an integer overflow. 
		return (NULL);
	if (!array)
		return (NULL);
	ft_bzero(array, count * size);
	return (array);

}
// int main ()
// {
//     int i;
//     i = 0;
//     int *array = ft_calloc(10,sizeof(int));
//     for (int i = 0; i < 10; i++) {
//         printf("arr[%d] = %d\n", i, array[i]); // Tous les éléments devraient être initialisés à zéro
//     }
// }
// count: The number of elements in the array.
// size: The size of each element in bytes.
//If count is zero or negative, it means no elements need to be allocated,
// and the allocation is not possible. Therefore, NULL is returned.