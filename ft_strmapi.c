/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 17:47:03 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 17:25:25 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s);
	if (len && (s2 = (char *)ft_calloc(len + 1, sizeof(char))))
	{
		s += len - 1;
		while (len--)
			s2[len] = f(len, *s--);
	}
	return (s2);
}
