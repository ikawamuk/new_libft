/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 04:31:24 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 05:20:37 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack)
	{
		if (*haystack == *needle)
			if (!ft_strncmp(haystack, needle, needle_len))
				return (haystack);
		++haystack;
	}
	return (NULL);
}
