/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <bperez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 13:31:41 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/23 19:38:00 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void	*ft_memset(void *ptr, const int c, size_t len);
void	ft_bzero(void *ptr, const size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dst, const void *src, const int c, const size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *ptr, const int c, const size_t len);
int		ft_memcmp(const void *p1, const void *p2, const size_t len);
void	*ft_calloc(size_t count, size_t size);
void    ft_free_2d(void **array, size_t size);

size_t	ft_strlen(const char *str);
size_t	ft_strclen(const char *str, const int c);
int		ft_isalpha(const int c);
int		ft_isdigit(const int c);
int		ft_isalnum(const int c);
int		ft_isascii(const int c);
int		ft_isprint(const int c);
int		ft_isspace(const int c);
int		ft_toupper(const int c);
int		ft_tolower(const int c);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t len);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(const char c, const int fd);
void	ft_putstr_fd(const char *s, const int fd);
void	ft_putendl_fd(const char *s, const int fd);
void	ft_putnbr_fd(const int n, const int fd);

int		ft_atoi(const char *str);
char	*ft_itoa(const int n);

#endif
