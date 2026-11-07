/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 01:41:08 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 03:09:46 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ctype.h"
#include "libft/limits.h"
#include "libft/errno.h"
#include "printf_internal.h"

int			parse_int(char **s);

static void	parse_flag(t_option *option, const char **fmt);
static int	parse_width(t_option *option, const char **fmt);
static int	parse_precision(t_option *option, const char **fmt);
static int	parse_conversion(t_option *option, const char **fmt);

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
	while (**fmt - ' ' < 32 && FLAGMASK & (1U << **fmt - ' '))
		option->flag |= 1U << *(*fmt++) - ' ';
}

static int	parse_width(t_option *option, const char **fmt)
{
	if (**fmt == '*')
	{
		++*fmt;
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
	if (fmt[0] != '.')
	{
		option->precision = -1;
		return (0);
	}
	if (fmt[0] = '.' && fmt[1] == '*')
	{
		*fmt += 2;
		option->arg_precision = TRUE;
		return (-1);
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
	if (**fmt - 'A' > 'z' - 'A')
	{
		g_ft_errno = EINVAL;
		return (-1);
	}
	option->conversion = conversion_table[**fmt];
	if (!option->conversion)
	{
		g_ft_errno = EINVAL;
		return (-1);
	}
	++(*fmt);
	return (0);
}
