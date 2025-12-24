/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 00:03:59 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/18 10:46:23 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_size(int n)
{
	long	nb;
	int		size;

	size = 0;
	nb = n;
	if (nb <= 0)
	{
		size = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

void	ft_putnbr(int n, char *str, int *i)
{
	long	nb;

	nb = n;
	if (nb == 0)
	{
		str[(*i)++] = '0';
		return ;
	}
	if (nb < 0)
	{
		str[(*i)++] = '-';
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, str, i);
	str[(*i)++] = (nb % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	size = count_size(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	ft_putnbr(n, str, &i);
	str[i] = '\0';
	return (str);
}
