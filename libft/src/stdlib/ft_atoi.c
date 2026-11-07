/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:38:35 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 19:43:27 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdlib.h"

int	ft_atoi(const char *str)
{
    int	n;
	int	neg;

	n = 0;
	neg = 0;
	while (ft_isspace(*s))
		++s;
	if (*s == '-')
		neg = 1;
	if (*s == '-' || *s == '+')
		++s;
	while (ft_isdigit(*s))
		n = 10 * n - (*s++ - '0');
	if (neg)
		return (n);
	return (-n);
}
