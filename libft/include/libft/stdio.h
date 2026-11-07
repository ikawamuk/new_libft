/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:29:16 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:30:34 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDIO_H
# define STDIO_H

# include "stdarg.h"
// # include "stddef.h"

int	ft_printf(const char *format, ...);
int	ft_dprintf(int fd, const char *format, ...);
// int	sprintf(char *str, const char *format, ...);
// int	snprintf(char *str, t_size size, const char *format, ...);
int	ft_vprintf(const char *format, va_list ap);
int	ft_vdprintf(int fd, const char *format, va_list ap);
// int	vsprintf(char *str, const char *format, va_list ap);
// int	vsnprintf(char *str, t_size size, const char *format, va_list ap);

#endif
