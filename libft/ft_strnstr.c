/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:24:36 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/18 10:49:35 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	pos = 0;
	while (pos < len && haystack[pos])
	{
		i = 0;
		while ((pos + i) < len && haystack[pos + i] == needle[i] && needle[i])
			i++;
		if (needle[i] == '\0')
			return ((char *)&haystack[pos]);
		pos++;
	}
	return (NULL);
}
