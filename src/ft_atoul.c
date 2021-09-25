/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:11:51 by bperez            #+#    #+#             */
/*   Updated: 2021/09/25 17:00:09 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_atoul(char *digits)
{
	unsigned long	val;

	val = 0;
	while (ft_isspace(*digits))
		digits++;
	while (ft_isdigit(*digits))
		val = val * 10 + (*digits++ - '0');
	return (val);
}
