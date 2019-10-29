/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 18:48:16 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 17:27:50 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static char		*ft_strndup(const char *s1, size_t len)
{
	char	*s2;

	s2 = NULL;
	if ((s2 = (char *)ft_calloc(len + 1, sizeof(char))))
	{
		s2[len] = '\0';
		while (len--)
			s2[len] = s1[len];
	}
	return (s2);
}

int				check_set(const char *set, char c)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;

	if (s1)
	{
		while (*s1 && check_set(set, *s1))
			s1++;
		len = ft_strlen(s1);
		while (len && check_set(set, s1[len - 1]))
			len--;
		return (*s1 ? ft_strndup(s1, len) : (char *)s1);
	}
	return (NULL);
}
