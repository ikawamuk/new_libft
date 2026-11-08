/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 02:18:00 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 11:51:38 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/limits.h"
#include "libft/stddef.h"

int	parse_int(char **s)
{
	int	n;

	n = 0;
	while (ft_isdigit(**s))
	{
		if (n > INT_MAX / 10U || (**s - '0') > INT_MAX - 10 * n)
			n = -1;
		else
			n = 10 * n + (**s - '0');
		++(*s);
	}
	return (n);
}

char	*utoa_base(\
	unsigned int value, char *buffer, t_size buf_size, const char *base)
{
	unsigned int	radix;
	unsigned int	tmp;
	t_size			len;

	radix = ft_strlen(base);
	if (radix < 2)
		return (FT_NULL);
	tmp = value;
	len = 1;
	while (tmp >= radix)
	{
		tmp /= radix;
		++len;
	}
	if (len >= buf_size)
		return (FT_NULL);
	buffer[len] = '\0';
	while (len > 0)
	{
		buffer[--len] = base[value % radix];
		value /= radix;
	}
	return (buffer);
}

char	*utoa(unsigned int value, char *buffer, t_size buf_size)
{
	return (utoa_base(value, buffer, buf_size, "0123456789"));
}

char	*utoa_upper_hex(unsigned int value, char *buffer, t_size buf_size)
{
	return (utoa_base(value, buffer, buf_size, "0123456789ABCDEF"));
}

char	*utoa_lower_hex(unsigned int value, char *buffer, t_size buf_size)
{
	return (utoa_base(value, buffer, buf_size, "0123456789abcdef"));
}
