/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_unsigned_integer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 11:24:05 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/string.h"

char	*utoa(unsigned int value, char *buffer, t_size buf_size);

int	convert_unsigned_integer(t_field *field, const t_argument *argument)
{
	field->base_str = utoa(argument->i, field->buffer, sizeof(field->buffer));
	if (!field->base_str)
		return (-1);
	field->base_len = ft_strlen(field->base_str);
	return (0);
}
