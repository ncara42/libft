/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:02:40 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/17 19:12:19 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int				pos;
	unsigned char	character;

	character = (unsigned char)c;
	pos = 0;
	while (s[pos])
		pos++;
	if (s[pos] == character)
		return ((char *)&s[pos]);
	while (pos >= 0)
	{
		if (s[pos] == character)
			return ((char *)&s[pos]);
		pos--;
	}
	return (NULL);
}
