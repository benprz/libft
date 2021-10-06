/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:02:24 by bperez            #+#    #+#             */
/*   Updated: 2021/10/06 15:02:28 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	val;
	int		neg;

	val = 0;
	neg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = 1;
	if (neg || *str == '+')
		str++;
	while (ft_isdigit(*str))
		val = val * 10 + (*str++ - '0');
	if (neg)
		return (-val);
	return (val);
}
