/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:53:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 20:59:48 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdarg.h"

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list ap;
	int     ret;

	va_start(ap, format);
	ret = ft_vdprintf(fd, format, ap);
	va_end(ap);
	return (ret);
}
