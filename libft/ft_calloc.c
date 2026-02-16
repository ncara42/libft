#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	char		*arr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	arr = (char *)malloc(count * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, count * size);
	return (arr);
}
