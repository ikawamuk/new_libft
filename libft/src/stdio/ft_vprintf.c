/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:53:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 11:54:23 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdio.h"

int	ft_vprintf(const char *format, va_list ap)
{
	return (ft_vdprintf(1, format, ap));
}
