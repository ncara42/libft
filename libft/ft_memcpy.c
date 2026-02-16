#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			pos;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	pos = 0;
	while (pos < n)
	{
		d[pos] = s[pos];
		pos++;
	}
	return (dest);
}
