/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:48:52 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 23:50:43 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdarg.h"
#include "printf_internal.h"

void	pop_varg(t_arg *arg, int type, va_list ap)
{
	if (type == CHAR)
		arg->i = va_arg(ap, int);
	else if (type == DEC)
		arg->i = va_arg(ap, int);
	else if (type == U_INT)
		arg->u = va_arg(ap, unsigned int);
	else if (type == HEX_LOW)
		arg->u = va_arg(ap, unsigned int);
	else if (type == HEX_UP)
		arg->u = va_arg(ap, unsigned int);
	else if (type == STR)
		arg->p = va_arg(ap, void *);
	else if (type == PTR)
		arg->p = va_arg(ap, void *);
}
