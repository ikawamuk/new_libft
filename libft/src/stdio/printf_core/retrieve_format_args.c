/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retrieve_format_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 11:51:17 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:56:16 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "stdarg.h"
#include "limits.h"
#include "libft/errno.h"

void		pop_varg(t_argument *arg, enum e_type type, va_list ap);

static int	set_argument_width(t_option *option, int arg);

int	retrieve_format_arguments(t_option *option, va_list ap)
{
	if (option->arg_width)
		if (set_argument_width(option, va_arg(ap, int)) < 0)
			return (-1);
	if (option->arg_precision)
		option->precision = va_arg(ap, int);
	return (0);
}

static int	set_argument_width(t_option *option, int arg)
{
	if (arg == INT_MIN)
	{
		g_ft_errno = EOVERFLOW;
		return (-1);
	}
	if (arg < 0)
	{
		option->flag |= LEFT_ADJ;
		arg = -arg;
	}
	option->width = arg;
	return (0);
}
