/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 05:21:25 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:40:26 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

char	*ft_strndup(const char *s, t_size n)
{
	t_size	len;
	char	*dest;

	len = ft_strnlen(s, n);
	dest = ft_malloc(len + 1);
	if (!dest)
		return (FT_NULL);
	ft_memcpy(dest, s, len);
	dest[len] = '\0';
	return (dest);
}
