/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   int.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <bperez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 16:09:57 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 15:09:48 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

#include <stdarg.h>

char	*convert_int(va_list ap)
{
	return (ft_itoa(va_arg(ap, int)));
}
