#define _GNU_SOURCE
#include <netinet/ether.h>
#include <stdlib.h>

#include "libft.h"

int ft_ether_aton(const char *str, struct ether_addr *haddr)
{
	if (ft_strlen(str) != 17)
		return 0; // Invalid MAC address length

	char nb[3];
	nb[2] = '\0';

	// Check if each byte of the MAC address is within a valid range
	for (int i = 0; i < 6; ++i)
	{
		if (i != 5 && str[i * 3 + 2] != ':')
			return 0; // Invalid MAC address format
		nb[0] = str[i * 3];
		nb[1] = str[i * 3 + 1];
		if (ft_strtol(nb, NULL, 16) == 0 && nb[0] != '0' && nb[1] != '0')
			return 0; // Invalid hex number
		haddr->ether_addr_octet[i] = ft_strtol(nb, NULL, 16);
	}

	return 1; // Valid MAC address
}