/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_unsigned_integer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:31:31 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/string.h"

char	*utoa(unsigned int value, char *buffer, t_size buf_size);

int	convert_unsigned_integer(t_base_str *base, const t_argument *argument)
{
	base->base_str = utoa(argument->i, base->buffer, sizeof(base->buffer));
	if (!base->base_str)
		return (-1);
	base->base_len = ft_strlen(base->base_str);
	return (0);
}
