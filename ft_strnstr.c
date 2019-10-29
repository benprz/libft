/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/21 12:52:28 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 14:38:55 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	if (!(nlen = ft_strlen(needle)))
		return ((char *)haystack);
	i = 0;
	while (len-- && *haystack)
	{
		if (*haystack == needle[i])
		{
			if (nlen == ++i)
				break ;
		}
		else
		{
			haystack -= i;
			len += i;
			i = 0;
		}
		haystack++;
	}
	return (nlen == i ? (char *)haystack - i + 1 : NULL);
}
