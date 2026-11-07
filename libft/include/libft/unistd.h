/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unistd.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 05:49:26 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:27:28 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNISTD_H
# define UNISTD_H

# include "stddef.h"
# include "sys/types.h"

t_ssize	ft_read(int fildes, const void *buf, t_size nbyte);
t_ssize	ft_write(int fildes, const void *buf, t_size nbyte);

#endif
