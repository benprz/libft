/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:06:34 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 19:42:11 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = NULL;
	if (s && (s2 = (char *)ft_calloc(len + 1, sizeof(char))))
	{
		s += start;
		while (len--)
			s2[len] = s[len];
	}
	return (s2);
}
