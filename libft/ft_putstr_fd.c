#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	pos;

	pos = 0;
	while (s[pos])
	{
		ft_putchar_fd(s[pos], fd);
		pos++;
	}
}
