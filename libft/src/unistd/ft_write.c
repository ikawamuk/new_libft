/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:23:14 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:07:16 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "sys/sycall.h"

t_ssize	ft_write(int fildes, const void *buf, size_t nbyte)
{
	return (ft_syscall(SYS_write, fildes, buf, nbyte));
}
