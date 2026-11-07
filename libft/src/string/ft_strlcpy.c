/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 03:16:46 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:40:17 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size size)
{
	char	*dst_head;

	dst_head = dst;
	while (size-- && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - dst_head + ft_strlen(src));
}
