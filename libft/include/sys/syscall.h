/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syscall.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 06:21:52 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 20:27:21 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYS_SYCALL_H
# define SYS_SYCALL_H

#define SYS_read    0
#define SYS_write   1
#define SYS_open    2
#define SYS_close   3

long _ft_syscall(long number, long arg1, long arg2, long arg3, \
	long arg4, long arg5, long arg6);

#endif
