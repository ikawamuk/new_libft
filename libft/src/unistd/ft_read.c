/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:23:14 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 20:28:22 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "sys/sycall.h"

ssize_t	ft_read(int fildes, const void *buf, size_t nbyte)
{
	return (ft_syscall(SYS_read, fildes, buf, nbyte));
}
