/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 12:01:27 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

char	*utoa(unsigned int value, char *buffer, t_size buf_size);

int	convert_integer(t_field *field, const t_argument *argument)
{
	unsigned int	value;

	field->is_negative = (argument->i < 0);
	field->is_zero = (argument->i == 0);
	value = (unsigned int)argument->i;
	if (argument->i < 0)
		value = 0u - value;
	field->base_str = utoa(value, field->buffer, sizeof(field->buffer));
	if (!field->base_str)
		return (-1);
	field->base_len = ft_strlen(field->base_str);
	return (0);
}
