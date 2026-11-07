/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retrieve_argument.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 03:34:04 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 04:07:30 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "stdarg.h"
#include "limits.h"
#include "libft/errno.h"

void		pop_varg(t_arg *arg, enum e_type type, va_list ap);

static int	set_arg_width(t_option *option, int arg);

int	retrieve_argument(t_arg *argument, va_list *ap, t_option *option)
{
	if (option->arg_width)
		if (set_arg_width(option, va_arg(*ap, int)) < 0)
			return (-1);
	if (option->arg_precision)
		option->precision = va_arg(*ap, int);
	pop_varg(argument, option->conversion, ap);
	return (0);
}

static int	set_arg_width(t_option *option, int arg)
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
