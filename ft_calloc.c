/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 19:20:54 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 14:58:29 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = NULL;
	if ((ptr = malloc(size * count)))
		ft_bzero(ptr, size * count);
	return (ptr);
}
