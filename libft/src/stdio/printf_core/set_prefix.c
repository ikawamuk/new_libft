/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prefix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:05:21 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:08:35 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

void	set_prefix(t_format *format, const t_option *option,
		const t_argument *argument)
{
	if (option->conversion == PTR)
	{
		if (argument->p)
			format->prefix = "0x";
		return ;
	}
	if (!(option->flag & ALT_FORM) || argument->i == 0)
		return ;
	if (option->conversion == HEX_LOW)
		format->prefix = "0x";
	else if (option->conversion == HEX_UP)
		format->prefix = "0X";
}
