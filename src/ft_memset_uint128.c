/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_uint128.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.le-101.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:23:06 by bperez            #+#    #+#             */
/*   Updated: 2020/02/27 20:17:48 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void	ft_memset_uint128(void *ptr, const uint32_t c, size_t len_32)
{
	__uint128_t *ptr_128;
	int			len_128;

	ptr_128 = (__uint128_t *)ptr;
	if (len_32 % 4)
	{
		ptr_128[len_128] = c;
		len_32--;
		if (len_32 % 4)
		{
			ptr_128[len_128] << 32 |= c;
			len_32--;
			if (len_32--)
				ptr_128[len_128] << 64 |= c;
		}
		len_128--;
	}
	while (len_128--)
	{
		ptr_128[len_128] = c;
		ptr_128[len_128] |= ptr_128[len_128] << 32;
		ptr_128[len_128] |= ptr_128[len_128] << 64;
	}
}

#include <string.h>
#include <stdio.h>

int main()
{
	int ptr[1000];

	bzero(&ptr, 1000 * sizeof(int));
	ft_memset_uint128(&ptr, 61440, 1000);
	for (int i = 0; i < 1000; i++)
		printf("ptr[%d] = %d\n", i, ptr[i]);
	return (0);
}
