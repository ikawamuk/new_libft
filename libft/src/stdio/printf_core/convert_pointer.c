/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 12:02:03 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

int	convert_pointer(t_field *field, const t_argument *argument)
{
	field->is_zero = (argument->p == FT_NULL);
	field->base_str = utoa_lower_hex(\
		(unsigned long int)argument->p, field->buffer, sizeof(field->buffer));
	if (!field->base_str)
		return (-1);
	field->base_len = ft_strlen(field->base_str);
	return (0);
}
