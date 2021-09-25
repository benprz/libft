/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:29:50 by bperez            #+#    #+#             */
/*   Updated: 2021/09/25 16:59:40 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_number(char *digits)
{
	int		i;
	long	number;
	int		neg;

	i = 0;
	neg = 0;
	while (digits[i])
	{
		if (digits[i] == '-')
		{
			if (neg == 0)
				neg = 1;
			else
				return (0);
		}
		else if (!ft_isdigit(digits[i]))
			return (0);
		i++;
	}
	number = ft_atol(digits);
	if (number < INT_MIN || number > INT_MAX)
		return (0);
	return (1);
}
