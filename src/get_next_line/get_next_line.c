/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <bperez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 18:12:51 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:39:50 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <unistd.h>

static char	*update_line(char *line, char *buffer)
{
	char *tmp;

	if (line || buffer)
	{
		if ((tmp = malloc(ft_strlen(line) + ft_strclen(buffer, DELIM) + 1)))
			*(ft_strccpy(ft_strcpy(tmp, line), buffer, DELIM)) = '\0';
		if (line)
			free(line);
	}
}

int			get_next_line(int fd, char **line)
{
	static char	*buffer = NULL;
	char		*next_line;

	*line = NULL;
	while (1)
	{
		if (!(*line = update_line(line, buffer)))
			break ;
		if (!(next_line = ft_strchr(buffer, DELIM)))
		{
			if (read(fd, buffer, BUFFER_SIZE) < 0)
				break ;
			else if (buffer[0] = '\0')
				return (END_READ);
		}
		else
		{
			free(buffer);
			buffer = ft_strdup(next_line ? next_line : "");
			return (END_LINE);
		}
	}
	return (ERROR);
}

int main(int ac, char **av)
{
	int fd;
	char *line;

	if (ac == 2 && (fd = open(av[1], O_RDONLY)))
	{
		while (get_next_line(fd, &line))
		{
			printf("%s\n", line);
			free(line);
		}
	}
	return (0);
}
