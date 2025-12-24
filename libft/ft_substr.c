/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 19:26:22 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/18 19:29:47 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	pos;
	unsigned int	s_len;
	unsigned int	max_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	max_len = 0;
	while (s[start + max_len] && max_len < len)
		max_len++;
	sub = (char *)malloc(sizeof(char) * (max_len + 1));
	if (!sub)
		return (NULL);
	pos = 0;
	while (pos < max_len && s[start])
		sub[pos++] = s[start++];
	sub[pos] = '\0';
	return (sub);
}
