/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:06:34 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/18 15:31:19 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;

	if ((s2 = (char *)ft_calloc(len + 1, sizeof(char))) && start < ft_strlen(s))
	{
		s += start;
		while (len-- && s[len])
			s2[len] = s[len];
	}
	return (s2);
}
