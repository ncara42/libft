#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			pos;
	unsigned char	*p;

	p = (unsigned char *)s;
	pos = 0;
	while (pos < n)
	{
		p[pos] = (unsigned char)c;
		pos++;
	}
	return (s);
}
