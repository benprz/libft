/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bperez <bperez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/19 19:17:56 by bperez       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 16:22:08 by bperez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define ERROR -1

# include <stdarg.h>
# include <stdint.h>

enum				e_types
{
	_char,
	_digit,
	_int,
	_unsigned,
	_hexa_lowercase,
	_hexa_uppercase,
	_string,
	_pointer,
	_percent,
	_nbtypes
};

enum				e_flags
{
	_minus,
	_zero,
	_wildcard_width,
	_precision,
	_wildcard_size,
	_nbflags
};

union				u_flags
{
	uint64_t		value;
	unsigned char	byte[_nbflags];
};

typedef struct		s_args
{
	union u_flags	flags;
	int				width;
	int				size;
	int				type;
	char			*output;
	int				output_len;
}					t_args;

extern const char	g_conversion_types[_nbtypes];
extern char			*(*g_conversion_functions[_nbtypes])(va_list);
extern const char	g_flags[_nbflags];

int					ft_printf(const char *format, ...);
int					init_flags(const char **format, t_args *arg, va_list ap);
int					print_arg(t_args *arg);

char				*convert_char(va_list ap);
char				*convert_int(va_list ap);
char				*convert_unsigned(va_list ap);
char				*convert_hexa_lowercase(va_list ap);
char				*convert_hexa_uppercase(va_list ap);
char				*convert_string(va_list ap);
char				*convert_pointer(va_list ap);
char				*convert_percent();

void				print_flags(t_args *arg);

#endif
