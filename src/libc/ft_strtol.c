#include "libft.h"

long ft_strtol(const char *str, char **endptr, int base)
{
	long    nbr;
	int     sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	while (*str)
	{
		if (ft_isdigit(*str))
		{
			if (*str - '0' >= base)
				return 0; // Unsupported value for the given base
			nbr = nbr * base + (*str++ - '0');
		}
		else
		{
			if (!ft_isalpha(*str) || ft_toupper(*str) - 'A' + 10 >= base)
				return 0; // Unsupported value for the given base
			nbr = nbr * base + (ft_toupper(*str++) - 'A' + 10);
		}
	}
	if (endptr)
		*endptr = (char *)str;
	return (nbr * sign);
}
