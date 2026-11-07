/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_specifier_pipeline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:14:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 04:06:48 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"
#include "libft/stdarg.h"
#include "printf_internal.h"
#include <stdlib.h>

int		parse_format(t_option *option, const char **fmt);
int		retrieve_argument(t_arg *argument, va_list *ap, t_option *option);
int		convert_number(char **num_str, t_arg *argument, t_option *option);
long	output(char *num_str, t_option *option);

long	process_specifier_pipeline(int fd, const char **fmt, va_list ap)
{
	t_option	option;
	t_arg		argument;
	char		*num_str;
	long		ret;

	++(*fmt);
	ft_memset(&option, 0, sizeof(t_option));
	ft_memset(&argument, 0, sizeof(t_arg));
	num_str = 0;
	if (parse_format(&option, fmt) < 0)
		return (-1);
	if (retrieve_argument(&argument, &ap, &option) < 0)
		return (-1);
	if (convert_number(&num_str, &argument, &option) < 0)
		return (-1);
	ret = output(&num_str, &option);
	free(num_str);
	return (ret);
}
