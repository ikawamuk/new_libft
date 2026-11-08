/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_padding.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:07:01 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:34:18 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/limits.h"

static t_size	count_content_length(t_format *format, const t_base_str *base);

int	set_padding(t_format *format, const t_base_str *base,
			const t_option *option)
{
	t_size	content_len;

	format->is_left_adjust = !!(option->flag & LEFT_ADJ);
	format->pad_char = ' ';
	if (option->flag & ZERO_PAD)
		format->pad_char = '0';
	content_len = count_content_length(format, base);
	if (option->width > 0 && (t_size)option->width > content_len)
		format->padding = (t_size)option->width - content_len;
	return (0);
}

static t_size	count_content_length(t_format *format, const t_base_str *base)
{
	t_size	content_len;
	t_size	prefix_len;

	content_len = base->base_len + format->precision_zeros;
	prefix_len = 0;
	if (format->prefix)
		prefix_len = ft_strlen(format->prefix);
	if (content_len > INT_MAX - prefix_len - (format->sign != 0))
		return (-1);
	content_len += prefix_len + (format->sign != 0);
	return (content_len);
}
