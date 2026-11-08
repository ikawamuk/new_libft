/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 17:51:20 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/string.h"
#include "libft/stdint.h"

char	*utoa_upper_hex(t_uint64 value, char *buffer, t_size buf_size);
char	*utoa_lower_hex(t_uint64 value, char *buffer, t_size buf_size);

int	convert_hexadecimal(t_base_str *base, const t_argument *argument)
{
	if (argument->type == HEX_LOW)
		base->base_str = utoa_lower_hex(\
			argument->i, base->buffer, sizeof(base->buffer));
	else if (argument->type == HEX_UP)
		base->base_str = utoa_upper_hex(\
			argument->i, base->buffer, sizeof(base->buffer));
	if (!base->base_str)
		return (-1);
	base->base_len = ft_strlen(base->base_str);
	return (0);
}
