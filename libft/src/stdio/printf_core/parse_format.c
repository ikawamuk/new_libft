/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 01:41:08 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 17:52:25 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/errno.h"
#include "printf_internal.h"

int			parse_int(const char **s);

static void	parse_flag(t_option *option, const char **fmt);
static int	parse_width(t_option *option, const char **fmt);
static int	parse_precision(t_option *option, const char **fmt);
static int	parse_conversion(t_option *option, const char **fmt);

static const unsigned char	g_conversion_table[128] = {
['c'] = CHAR,
['d'] = INT,
['i'] = INT,
['u'] = U_INT,
['x'] = HEX_LOW,
['X'] = HEX_UP,
['s'] = STR,
['p'] = PTR
};

static const unsigned char	g_flag_table[128] = {
['#'] = ALT_FORM,
['0'] = ZERO_PAD,
['-'] = LEFT_ADJ,
[' '] = PAD_POS,
['+'] = SIGNED,
};

int	parse_format(t_option *option, const char **fmt)
{
	parse_flag(option, fmt);
	if (parse_width(option, fmt) < 0)
		return (-1);
	if (parse_precision(option, fmt) < 0)
		return (-1);
	if (parse_conversion(option, fmt) < 0)
		return (-1);
	return (0);
}

static void	parse_flag(t_option *option, const char **fmt)
{
	unsigned char	c;

	while (1)
	{
		c = (unsigned char)**fmt;
		if (c >= 128 || !g_flag_table[c])
			break ;
		option->flag |= g_flag_table[c];
		++(*fmt);
	}
}

static int	parse_width(t_option *option, const char **fmt)
{
	if (**fmt == '*')
	{
		++(*fmt);
		option->arg_width = TRUE;
		return (0);
	}
	option->width = parse_int(fmt);
	if (option->width < 0)
	{
		g_ft_errno = EOVERFLOW;
		return (-1);
	}
	return (0);
}

static int	parse_precision(t_option *option, const char **fmt)
{
	if ((*fmt)[0] != '.')
	{
		option->precision = -1;
		return (0);
	}
	if ((*fmt)[0] == '.' && (*fmt)[1] == '*')
	{
		*fmt += 2;
		option->arg_precision = TRUE;
		return (0);
	}
	++(*fmt);
	option->precision = parse_int(fmt);
	if (option->precision < 0)
	{
		g_ft_errno = EOVERFLOW;
		return (-1);
	}
	return (0);
}

static int	parse_conversion(t_option *option, const char **fmt)
{
	unsigned char	c;

	c = (unsigned char)**fmt;
	if (c >= 128 || !g_conversion_table[c])
	{
		g_ft_errno = EINVAL;
		return (-1);
	}
	option->conversion = g_conversion_table[c];
	++(*fmt);
	return (0);
}
