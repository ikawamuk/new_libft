/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:24:08 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:50:36 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/sys/types.h"

long	output(int fd, const t_base_str *base, const t_format *fmt)
{
	long	total;

	total = 0;
	if (!fmt->is_left_adjust && fmt->pad_char == ' ')
		if (append(&total,
				write_padding(fd, ' ', fmt->padding)) < 0)
			return (-1);
	if (append(&total, output_content(fd, base, fmt)) < 0)
		return (-1);
	if (fmt->is_left_adjust)
		if (append(&total,
				write_padding(fd, ' ', fmt->padding)) < 0)
			return (-1);
	return (total);
}

static long	output_content(int fd, const t_base_str *base,
		const t_format *fmt)
{
	long	total;

	total = 0;
	if (fmt->sign)
		if (append(&total, write_all(fd, &fmt->sign, 1)) < 0)
			return (-1);
	if (fmt->prefix)
		if (append(&total, write_all(fd, fmt->prefix,
					ft_strlen(fmt->prefix))) < 0)
			return (-1);
	if (fmt->pad_char == '0')
		if (append(&total, write_padding(fd, '0', fmt->padding)) < 0)
			return (-1);
	if (append(&total,
			write_padding(fd, '0', fmt->precision_zeros)) < 0)
		return (-1);
	if (append(&total,
			write_all(fd, base->base_str, base->base_len)) < 0)
		return (-1);
	return (total);
}

static long	write_all(int fd, const char *str, t_size len)
{
	t_size		total;
	t_ssize		ret;

	total = 0;
	while (total < len)
	{
		ret = write(fd, str + total, len - total);
		if (ret <= 0)
			return (-1);
		total += ret;
	}
	return (total);
}

static long	write_padding(int fd, char c, t_size len)
{
	char	buffer[256];
	t_size	chunk;
	long	ret;
	long	total;

	ft_memset(buffer, c, sizeof(buffer));
	total = 0;
	while (len > 0)
	{
		chunk = len;
		if (chunk > sizeof(buffer))
			chunk = sizeof(buffer);
		ret = write_all(fd, buffer, chunk);
		if (ret < 0)
			return (-1);
		total += ret;
		len -= chunk;
	}
	return (total);
}

static int	append(long *total, long ret)
{
	if (ret < 0)
		return (-1);
	*total += ret;
	return (0);
}
