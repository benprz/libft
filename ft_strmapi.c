/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 17:47:03 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 16:36:38 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	len;

	s2 = NULL;
	if (s && f)
	{
		len = ft_strlen(s);
		if (len && (s2 = (char *)ft_calloc(len + 1, sizeof(char))))
		{
			s += len - 1;
			while (len--)
				s2[len] = f(len, *s--);
		}
	}
	return (s2);
}
