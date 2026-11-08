/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:53:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 17:55:27 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdio.h"
#include <limits.h>

long	printf_core(int fd, const char **fmt, va_list ap);

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	long	total_len;
	long	output_count;

	total_len = 0;
	while (*format)
	{
		output_count = printf_core(fd, &format, ap);
		if (output_count < 0)
			return (-1);
		if (output_count > INT_MAX - total_len)
			return (-1);
		total_len += output_count;
	}
	return (total_len);
}
