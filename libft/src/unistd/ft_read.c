/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:23:14 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:44:55 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stddef.h"
#include "libft/sys/types.h"
#include "libft/sys/syscall.h"

t_ssize	ft_read(int fildes, const void *buf, t_size nbyte)
{
	return (ft_syscall(SYS_READ, fildes, buf, nbyte));
}
