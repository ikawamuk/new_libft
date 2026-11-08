/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_specifier_pipeline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:14:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 17:13:46 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"
#include <stdarg.h>
#include "printf_internal.h"

int		parse_format(t_option *option, const char **fmt);
int		retrieve_format_arguments(t_option *option, va_list ap);
void	normalize_format_option(t_option *option);
void	pop_varg(t_argument *arg, enum e_type type, va_list ap);
int		convert_argument(t_base_str *base, const t_argument *argument);
int		set_format(t_format *format, t_base_str *base_string,
			const t_option *option, const t_argument *argument);
long	output(int fd, const t_base_str *base, const t_format *format);

long	process_specifier_pipeline(int fd, const char **fmt, va_list ap)
{
	t_option	option;
	t_argument	argument;
	t_base_str	base_string;
	t_format	format;

	++(*fmt);
	ft_memset(&option, 0, sizeof(t_option));
	ft_memset(&argument, 0, sizeof(t_argument));
	ft_memset(&base_string, 0, sizeof(t_base_str));
	ft_memset(&format, 0, sizeof(t_format));
	if (parse_format(&option, fmt) < 0)
		return (-1);
	if (retrieve_format_arguments(&option, ap) < 0)
		return (-1);
	normalize_format_option(&option);
	pop_varg(&argument, option.conversion, ap);
	if (convert_argument(&base_string, &argument) < 0)
		return (-1);
	if (set_format(&format, &base_string, &option, &argument) < 0)
		return (-1);
	return (output(fd, &base_string, &format));
}
