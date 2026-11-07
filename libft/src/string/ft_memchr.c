/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:14:50 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:30:57 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

void	*ft_memchr(const void *s, int c, t_size n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- && *p != (unsigned char)c)
		++p;
	if (n)
		return (p);
	return (FT_NULL);
}
