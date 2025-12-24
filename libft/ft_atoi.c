/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:58:51 by ncaravac          #+#    #+#             */
/*   Updated: 2025/12/13 16:30:55 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	pos;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	pos = 0;
	while ((str[pos] >= '\t' && str[pos] <= '\r') || (str[pos] == ' '))
		pos++;
	while (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign = -1;
		pos++;
		if (str[pos] == '-' || str[pos] == '+')
			return (0);
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		result = result * 10 + (str[pos] - '0');
		pos++;
	}
	return (result * sign);
}
