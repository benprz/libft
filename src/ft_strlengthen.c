/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlengthen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:39:07 by bperez            #+#    #+#             */
/*   Updated: 2021/02/02 15:40:05 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strlengthen(char *str, size_t len, char c)
{
	int		length;
	char	*strl;

	length = ft_strlen(str) + len;
	if ((strl = malloc(sizeof(char) * (length + 1))))
	{
		ft_strcpy(strl, str);
		strl[length] = '\0';
		while (len--)
			strl[length - len - 1] = c;
	}
	return (strl);
}
