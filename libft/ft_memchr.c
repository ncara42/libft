#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			pos;
	unsigned char	*data;
	unsigned char	byte;

	data = (unsigned char *)s;
	byte = (unsigned char)c;
	pos = 0;
	while (pos < n)
	{
		if (data[pos] == byte)
			return (&data[pos]);
		pos++;
	}
	return (NULL);
}
