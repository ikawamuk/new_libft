/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 03:37:12 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 03:39:06 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	const char	*p;

	p = ft_memchr(s, '\0', maxlen);
	if (p)
		return (p - s);
	return (maxlen);
}
