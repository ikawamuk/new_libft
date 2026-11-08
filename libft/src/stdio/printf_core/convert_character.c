/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_character.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 11:16:49 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

int	convert_character(t_field *field, const t_argument *argument)
{
	field->base_str[0] = (char)argument->i;
	field->base_str = field->buffer;
	field->base_len = 1;
	return (0);
}
