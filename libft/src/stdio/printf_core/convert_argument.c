/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_argument.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:20:12 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:31:31 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"

int	convert_character(t_base_str *base, const t_argument *argument);
int	convert_string(t_base_str *base, const t_argument *argument);
int	convert_pointer(t_base_str *base, const t_argument *argument);
int	convert_integer(t_base_str *base, const t_argument *argument);
int	convert_unsigned_integer(t_base_str *base, const t_argument *argument);
int	convert_hexadecimal(t_base_str *base, const t_argument *argument);

int	convert_argument(t_base_str *base, const t_argument *argument)
{
	if (argument->type == CHAR)
		return (convert_character(base, argument));
	if (argument->type == STR)
		return (convert_string(base, argument));
	if (argument->type == PTR)
		return (convert_pointer(base, argument));
	if (argument->type == INT)
		return (convert_integer(base, argument));
	if (argument->type == U_INT)
		return (convert_unsigned_integer(base, argument));
	if (argument->type == HEX_LOW || argument->type == HEX_UP)
		return (convert_hexadecimal(base, argument));
	return (-1);
}
