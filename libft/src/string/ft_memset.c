/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 03:00:18 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:30:34 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

void	*ft_memset(void *s, int c, t_size n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p = (unsigned char)c;
	return (s);
}
