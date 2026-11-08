/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 11:55:23 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

char	*utoa_upper_hex(unsigned int value, char *buffer, t_size buf_size);
char	*utoa_lower_hex(unsigned int value, char *buffer, t_size buf_size);

int	convert_hexadecimal(t_field *field, const t_argument *argument)
{
	if (argument->type == HEX_LOW)
		field->base_str = utoa_lower_hex(\
			argument->i, field->buffer, sizeof(field->buffer));
	else if (argument->type == HEX_UP)
		field->base_str = utoa_upper_hex(\
			argument->i, field->buffer, sizeof(field->buffer));
	if (!field->base_str)
		return (-1);
	field->base_len = ft_strlen(field->base_str);
	return (0);
}
