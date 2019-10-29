/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 18:27:49 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 15:00:03 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'\
			|| c == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int val;
	int	neg;

	val = 0;
	neg = 0;
	while (ft_isspace(*str))
		str++;
	if ((neg = *str == '-' ? 1 : 0) || *str == '+')
		str++;
	while (ft_isdigit(*str))
		val = val * 10 + (*str++ - '0');
	return (neg ? -val : val);
}
