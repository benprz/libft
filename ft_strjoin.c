/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:35:31 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 16:44:50 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*s3;
	size_t			s1_len;
	size_t			s2_len;

	s3 = NULL;
	if (s1 && s2)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		if ((s3 = (char *)ft_calloc(s1_len + s2_len + 1, sizeof(char))))
		{
			s3 += s1_len + s2_len;
			while (s2_len--)
				*--s3 = s2[s2_len];
			while (s1_len--)
				*--s3 = s1[s1_len];
		}
	}
	return (s3);
}
