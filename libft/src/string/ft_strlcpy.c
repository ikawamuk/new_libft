/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 03:16:46 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 03:23:18 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	while (size--)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}
