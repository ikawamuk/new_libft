/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syscall.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:24:43 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:25:28 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYSCALL_H
# define SYSCALL_H

# define SYS_READ	0
# define SYS_WRITE	1
# define SYS_OPEN	2
# define SYS_CLOSE	3

long	ft_syscall(long number, ...);

#endif
