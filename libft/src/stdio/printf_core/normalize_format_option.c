/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_format_option.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 09:07:58 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 09:10:41 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

void	normalize_format_option(t_option *option)
{
	if (option->flag & LEFT_ADJ)
		option->flag &= ~ZERO_PAD;
	if (option->precision >= 0
		&& (option->conversion == INT || option->conversion == U_INT))
		option->precision &= ~ZERO_PAD;
	return ;
}
