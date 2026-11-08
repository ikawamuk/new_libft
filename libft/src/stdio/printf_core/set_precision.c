/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:06:12 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:35:35 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/limits.h"
#include "libft/errno.h"

static int	set_string_length(t_base_str *base, const t_option *option);
static BOOL	is_integer_type(enum e_type type);
static void	set_integer_precision(t_format *format, t_base_str *base,
				const t_option *option, const t_argument *argument);

int	set_precision(t_format *format, t_base_str *base,
	const t_option *option, const t_argument *argument)
{
	if (option->conversion == STR)
		return (set_string_length(base, option));
	if (is_integer_type(option->conversion))
		set_integer_precision(format, base, option, argument);
	return (0);
}

static int	set_string_length(t_base_str *base, const t_option *option)
{
	if (option->precision >= 0)
	{
		base->base_len = ft_strnlen(base->base_str, (t_size)option->precision);
		return (0);
	}
	base->base_len = ft_strnlen(base->base_str, INT_MAX);
	if (base->base_len == INT_MAX && base->base_str[INT_MAX] != '\0')
	{
		g_ft_errno = EOVERFLOW;
		return (-1);
	}
	return (0);
}

static BOOL	is_integer_type(enum e_type type)
{
	return (type == INT || type == U_INT
		|| type == HEX_LOW || type == HEX_UP);
}

static void	set_integer_precision(t_format *format, t_base_str *base,
				const t_option *option, const t_argument *argument)
{
	if (option->precision < 0)
		return ;
	if (option->precision == 0 && is_zero_argument(argument))
	{
		base->base_len = 0;
		return ;
	}
	if ((t_size)option->precision > base->base_len)
		format->precision_zeros = (t_size)option->precision - base->base_len;
}
