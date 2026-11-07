/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syscall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:47:42 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 20:22:36 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sys/syscall.h"
#include "libft.h"

static long	ft_syscall_ret(long int	return_value);

long ft_syscall(long number, ...)
{
	va_list	ap;
	long    args[6];
	size_t	i;

	va_start(ap, number);
	i = 0;
    while (i < 6)
    {
        args[i] = va_arg(ap, long);
        ++i;
    }
	va_end(ap);
	return (ft_syscall_ret(_ft_syscall(number, \
		args[0], args[1], args[2], args[3], args[4], args[5])));
}

static long	ft_syscall_ret(long int	return_value)
{
	if ((unsigned long int)return_value >= -4095UL)
	{
		ft_errno = -return_value;
		return (-1);
	}
	return (return_value);
}
