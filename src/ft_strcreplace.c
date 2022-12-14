/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcreplace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:40:20 by bperez            #+#    #+#             */
/*   Updated: 2021/01/30 14:45:44 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcreplace(char *str, char src, char dst)
{
	while (*str)
	{
		if (*str == src)
			*str = dst;
		str++;
	}
}
