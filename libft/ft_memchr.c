/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:00:09 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/18 10:48:09 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
