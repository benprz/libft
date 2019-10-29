/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:31:21 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 18:50:32 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst || src)
		while (n--)
			*((unsigned char *)dst + n) = *((unsigned char *)src + n);
	return ((unsigned char *)dst);
}
