/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_specifier_pipeline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:14:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 05:08:20 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"
#include "libft/stdarg.h"
#include "printf_internal.h"
#include <stdlib.h>

int		parse_format(t_option *option, const char **fmt);
int		retrieve_format_args(t_option *option, va_list *ap);
void	pop_varg(t_arg *arg, enum e_type type, va_list ap);
int		convert_argument(char **num_str, const t_arg *argument);
long	output(int fd, char *num_str, t_option *option);

long	process_specifier_pipeline(int fd, const char **fmt, va_list ap)
{
	t_option	option;
	t_arg		argument;
	char		*base_string;
	long		ret;

	++(*fmt);
	ft_memset(&option, 0, sizeof(t_option));
	ft_memset(&argument, 0, sizeof(t_arg));
	base_string = NULL;
	if (parse_format(&option, fmt) < 0)
		return (-1);
	if (retrieve_format_args(&option, ap) < 0)
		return (-1);
	pop_varg(&argument, option.conversion, ap);
	if (convert_argument(&base_string, &argument) < 0)
		return (-1);
	ret = output(fd, &base_string, &option);
	free(base_string);
	return (ret);
}
