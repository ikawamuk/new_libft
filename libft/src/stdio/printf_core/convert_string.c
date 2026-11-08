/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 10:08:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:31:31 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_internal.h"
#include "libft/string.h"

int	convert_string(t_base_str *base, const t_argument *argument)
{
	if (!argument->p)
		base->base_str = (char *)"(null)";
	else
		base->base_str = (char *)argument->p;
	return (0);
}
