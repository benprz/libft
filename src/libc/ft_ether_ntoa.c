#define _GNU_SOURCE
#include <netinet/ether.h>

#include <stdio.h>

char *ft_ether_ntoa(const struct ether_addr *addr)
{
	static char str[18];
	snprintf(str, sizeof(str), "%02x:%02x:%02x:%02x:%02x:%02x",
			 addr->ether_addr_octet[0], addr->ether_addr_octet[1],
			 addr->ether_addr_octet[2], addr->ether_addr_octet[3],
			 addr->ether_addr_octet[4], addr->ether_addr_octet[5]);
	return str;
}