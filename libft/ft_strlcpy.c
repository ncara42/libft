#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;

	if (!dst || !src)
		return (0);
	pos = 0;
	if (dstsize > 0)
	{
		while (src[pos] && pos < dstsize - 1)
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	return (ft_strlen(src));
}
