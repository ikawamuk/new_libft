/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unistd.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 05:49:26 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 20:04:08 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNISTD_H
# define UNISTD_H

# include "stddef.h"
# include "sys/types.h"

long	ft_syscall(long number, ...);
// int		ft_close(int fildes);
ssize_t	ft_read(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);

#endif
