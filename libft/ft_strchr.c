/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 15:53:37 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/17 19:10:20 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
