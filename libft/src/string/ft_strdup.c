/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 03:08:09 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:33:55 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"
#include "libft/stdlib.h"

char	*ft_strdup(const char *s)
{
	t_size	len;
	char	*dest;

	len = ft_strlen(s);
	dest = ft_malloc(len + 1);
	if (!dest)
		return (FT_NULL);
	return (ft_strcpy(dest, s));
}
