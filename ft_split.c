/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 15:08:44 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 16:57:37 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static void		ft_free_2d(void **array, size_t size)
{
	size_t i;

	i = 0;
	while (i != size)
	{
		if (array[i])
			free(array[i]);
		i++;
	}
	free(array);
}

static char		*ft_strndup(const char *s1, size_t len)
{
	char	*s2;

	if ((s2 = (char *)ft_calloc(len + 1, sizeof(char))))
	{
		while (len--)
			s2[len] = s1[len];
	}
	return (s2);
}

static size_t	count_words(const char *s, char c)
{
	size_t	nwords;

	nwords = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		nwords++;
	}
	return (nwords);
}

static char		*parse_word(const char *s, char c, size_t current_word)
{
	size_t i;

	while (*s && *s == c)
		s++;
	while (*s && current_word)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		current_word--;
	}
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (ft_strndup(s, i));
}

char			**ft_split(const char *s, char c)
{
	char		**array;
	size_t		nwords;
	size_t		i;

	array = NULL;
	if (s && c && (nwords = count_words(s, c)))
	{
		if ((array = (char **)ft_calloc(nwords + 1, sizeof(char *))))
		{
			i = 0;
			while (i != nwords)
			{
				if (!(array[i] = parse_word(s, c, i)))
				{
					ft_free_2d((void **)array, nwords);
					return (NULL);
				}
				i++;
			}
		}
	}
	return (array);
}
