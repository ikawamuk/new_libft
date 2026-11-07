/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 04:49:49 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:05:57 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	little_len = ft_strlen(little);
	while (*big && little <= len)
	{
		if (*big == *little)
			if (!ft_strncmp(big, little, little_len))
				return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
