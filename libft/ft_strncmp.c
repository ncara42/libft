/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:09:44 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/17 19:14:34 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n && s1[pos] && s2[pos] && s1[pos] == s2[pos])
		pos++;
	if (pos == n)
		return (0);
	return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
}
