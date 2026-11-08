/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:31:31 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

int	convert_pointer(t_base_str *base, const t_argument *argument)
{
	base->is_zero = (argument->p == FT_NULL);
	if (!argument->p)
	{
		base->base_str = "(nil)";
		base->base_len = 5;
		return (0);
	}
	base->base_str = utoa_lower_hex(\
		(unsigned long int)argument->p, base->buffer, sizeof(base->buffer));
	if (!base->base_str)
		return (-1);
	base->base_len = ft_strlen(base->base_str);
	return (0);
}
