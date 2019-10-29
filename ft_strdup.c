/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 20:05:00 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 17:20:27 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	s2 = NULL;
	len = ft_strlen(s1);
	if ((s2 = (char *)ft_calloc(len + 1, sizeof(char))))
	{
		while (len--)
			s2[len] = s1[len];
	}
	return (s2);
}
