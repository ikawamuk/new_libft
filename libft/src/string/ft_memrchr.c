/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 04:40:58 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:30:34 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

void	*ft_memrchr(const void *s, int c, t_size n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		if (p[n] == (unsigned char)c)
			return (&p[n]);
	return (FT_NULL);
}
