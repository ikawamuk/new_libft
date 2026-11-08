/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_specifier_pipeline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:14:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 11:23:07 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"
#include "libft/stdarg.h"
#include "printf_internal.h"
#include <stdlib.h>

int		parse_format(t_option *option, const char **fmt);
int		retrieve_format_arguments(t_option *option, va_list *ap);
void	normalize_format_option(t_option *option);
void	pop_varg(t_argument *arg, enum e_type type, va_list ap);
int		convert_argument(t_field *field, const t_argument *argument);
long	output(const int fd, const t_field *field, const t_option *option);

long	process_specifier_pipeline(int fd, const char **fmt, va_list ap)
{
	t_option	option;
	t_argument	argument;
	t_field		field;

	++(*fmt);
	ft_memset(&option, 0, sizeof(t_option));
	ft_memset(&argument, 0, sizeof(t_argument));
	ft_memset(&field, 0, sizeof(t_field));
	if (parse_format(&option, fmt) < 0)
		return (-1);
	if (retrieve_format_arguments(&option, ap) < 0)
		return (-1);
	normalize_format_option(&option);
	pop_varg(&argument, option.conversion, ap);
	if (convert_argument(&field, &argument) < 0)
		return (-1);
	return (output(fd, &field, &option));
}
