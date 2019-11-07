/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 18:43:51 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 19:53:59 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (dst && size)
	{
		j = ft_strlen(src);
		while (size-- > 1 && *src)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (j);
}
