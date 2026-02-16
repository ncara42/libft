#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int				pos;
	unsigned char	character;

	character = (unsigned char)c;
	pos = 0;
	while (s[pos])
	{
		if (s[pos] == character)
			return ((char *)&s[pos]);
		pos++;
	}
	if (s[pos] == character)
		return ((char *)&s[pos]);
	return (NULL);
}
