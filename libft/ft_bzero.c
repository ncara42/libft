/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 09:05:39 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/18 11:28:47 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
