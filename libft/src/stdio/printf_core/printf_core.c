/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_core.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 22:53:19 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 03:14:42 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdarg.h"
#include <unistd.h>

long		process_specifier_pipeline(int fd, const char **fmt, va_list ap);

static long	output_char_literal(int fd, const char **fmt);

long	printf_core(int fd, const char **fmt, va_list ap)
{
	if (*fmt != '%')
		return (output_char_literal(fd, fmt));
	if (fmt[1] == '%')
		return (output_char_literal(fd, ++fmt));
	return (process_specifier_pipeline(fd, fmt, ap));
}

static long	output_char_literal(int fd, const char **fmt)
{
	long	ret;

	ret = write(fd, fmt, 1);
	++(*fmt);
	return (ret);
}
