/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 06:04:53 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 03:15:47 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDLIB_H
# define STDLIB_H

# include "stddef.h"

int		ft_atoi(const char *nptr);

void	*ft_malloc(t_size size);
void	ft_free(void *ptr);
// void	*ft_calloc(t_size nmemb, t_size size);
// void	*ft_realloc(void *ptr, t_size size);

#endif
