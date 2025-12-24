/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 08:42:02 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/16 12:51:50 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
