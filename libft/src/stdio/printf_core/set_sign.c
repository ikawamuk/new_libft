/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sign.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:04:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:05:01 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

void	set_sign(t_format *format, const t_option *option,
		const t_argument *argument)
{
	if (option->conversion != INT)
		return ;
	if (argument->i < 0)
		format->sign = '-';
	else if (option->flag & SIGNED)
		format->sign = '+';
	else if (option->flag & PAD_POS)
		format->sign = ' ';
}
