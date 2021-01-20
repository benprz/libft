#include <stddef.h>

size_t	ft_strlen_2d(char **array)
{
	size_t i;

	i = 0;
	if (array)
	{
		while (*(array++))
			i++;
	}
	return (i);
}
