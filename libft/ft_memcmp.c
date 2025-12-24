/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:17:54 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/18 10:48:15 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			pos;
	unsigned char	*data1;
	unsigned char	*data2;

	data1 = (unsigned char *)s1;
	data2 = (unsigned char *)s2;
	pos = 0;
	while (pos < n && data1[pos] == data2[pos])
		pos++;
	if (pos == n)
		return (0);
	return (data1[pos] - data2[pos]);
}
