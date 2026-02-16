#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			pos;
	unsigned char	*copy;

	copy = (unsigned char *)s;
	pos = 0;
	while (pos < n)
	{
		copy[pos] = 0;
		pos++;
	}
}
