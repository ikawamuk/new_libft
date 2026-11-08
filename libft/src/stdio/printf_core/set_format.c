/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:46:44 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:35:55 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/limits.h"

void	set_sign(t_format *format, const t_option *option,
			const t_argument *argument);
void	set_prefix(t_format *format, const t_option *option,
			const t_argument *argument);
int		set_precision(t_format *format, t_base_str *base,
			const t_option *option, const t_argument *argument);
int		set_padding(t_format *format, t_base_str *base,
			const t_option *option);

int	set_format(t_format *format, const t_base_str *base_string,
			const t_option *option, const t_argument *argument)
{
	set_sign(format, option, argument);
	set_prefix(format, option, argument);
	if (set_precision(format, base_string, option, argument) < 0)
		return (-1);
	if (set_padding(format, base_string, option) < 0)
		return (-1);
	return (0);
}
